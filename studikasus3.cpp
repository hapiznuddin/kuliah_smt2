#include<iostream>
using namespace std;

int S (int n)
{
    if (n==1)
    {
        return (1);
    } else 
    {
        return ((2*n-1) + S(n-1));
    }
}

int main()
{
    int n, i;

    cout <<"--- Program Deret Ganjil --- \n";   
    cout <<"Masukkan Bilangan Ganjil : "; cin >>n;

    for (i = 1; i <= n*2; i += 2)
    {
        if (i == 1)
            cout <<i;
        else
            cout <<" + " <<i;
    }
    cout <<" = " <<S(n) <<endl;

    cout <<"=========================== \n";
    cout <<"Nama : Hapiz Nuddin Setiadi \n";
    cout <<"NIM  : 20190801364 \n";

    system("pause");
    return 0;
}