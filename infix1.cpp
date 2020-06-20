#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool isOperator(char c)
{
    return (!isalpha(c) && !isdigit(c));
}

int getPriority(char C)
{
    if (C == '+' || C == '-')
        return 2;
    else if (C == '*' || C == '/')
        return 3;
    else if (C == '^')
        return 4;
    return 0;
}

string infixToPosfix(string infix)
{
    infix = '(' + infix + ')';
    int l = infix.size();
    stack <char> char_stack;
    string output;
    string in;
    

    for (int i = 0; i < l; i++)
    {
        if (isalpha(infix[i]) || isdigit(infix[i]))
            output += infix[i];
        else if (infix[i] == '(')
            char_stack.push('(');
        else if (infix[i] == ')')
        {
            while (char_stack.top() != '(')
            {
                output += char_stack.top();
                char_stack.pop();
            }
            char_stack.pop();
        }
        else
        {
            if (isOperator(char_stack.top()))
            {
                while (getPriority(infix[i]) <= getPriority(char_stack.top())) 
                {
                    output += char_stack.top();
                    char_stack.pop();
                }
                char_stack.push(infix[i]);
            }
        }
    }
    return output;
}

string infixToPrefix(string infix)
{
    int l = infix.size();
    reverse(infix.begin(), infix.end());

    for (int i = 0; i < l; i++)
    {
        if (infix[i] == '(')
        {
            infix[i] = ')';
            i++;
        }
        else if (infix[i] == ')')
        {
            infix[i] = '(';
            i++;
        }
    }

    string prefix = infixToPosfix(infix);

    reverse(prefix.begin(), prefix.end());
    return prefix;
}

int main()
{
    int pilih;
    string in;
    do
    {
        system("cls");
        cout <<"1. Infix to Posfix\n";
        cout <<"2. Infix to Prefix\n";
        cout <<"3. Exit\n\n";
        cout <<"Masukkan Pilihan : ";
        cin >> pilih;
        switch(pilih)
        {
            case 1:
                system("cls");
                cout <<"Masukkan Bilangan Infix : \n";
                cin >> in;
                cout <<endl;
                cout <<"Hasil : " << infixToPosfix(in) <<endl;
                system("pause");
            break;

            case 2:
                system("cls");
                cout <<"Masukkan Bilangan Infix : \n";
                cin >> in;
                cout <<endl;
                cout <<"Hasil : " <<infixToPrefix(in) <<endl;
                system("pause");
            break;
        }
    } while (pilih != 3);
    system("pause");
    return 0;    
}