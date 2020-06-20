#include<iostream>

using namespace std;

int printTerbalik(int a)
{
    int b;

    if (a != 0)
    {
        b = (a % 10);
        a = a / 10;
        
        cout << b;
    } 
    
    else
    {
        return 0;
    }
    return printTerbalik(a);
}

int main()
{
    int n;
    cout << "Masukan nilai = ";cin >> n;
    cout << "Hasil = "; printTerbalik(n); cout <<endl;

    system("pause");
    return 0;
}