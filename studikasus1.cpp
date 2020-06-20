#include<iostream>

using namespace std; 

int S (int n)
{
    if (n==1)
    {
        return (n);
    } else 
    {
        return (n + S(n-1));
    }
}

int main(){
    
    int n, i;

    cout <<"--- Program Deret Angka --- \n";
    cout <<"Masukkan Bilangan deret : "; cin >>n; cout <<endl;

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
            cout << i;
        else
            cout <<" + " << i;
    }
    cout <<" = " <<S(n) <<endl;

    cout <<"=========================== \n";
    cout <<"Nama : Hapiz Nuddin Setiadi \n";
    cout <<"NIM  : 20190801364 \n";

    system("pause");
    return 0;
}