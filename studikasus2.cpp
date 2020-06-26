#include<iostream>
using namespace std;

int S (int n){
    if (n == 1)
    {
        return (2);
    } else 
    {
        return (2*n + S(n-1));
    }
}

int main()
{
    int n, i;

    cout <<"--- Program Bilangan Genap --- \n";
    cout <<"Masukkan Bilangan Genap : "; cin >>n; cout <<endl;

    for (i = 2; i <= n*2; i+=2)
    {
        if (i == 2)
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