#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

void Koin (int x[], int i)
{
    int a, b, j;
    for (a = 1; a <= i-1; a++)
    {
        for (j = 0; j <= i-2; j++)
        {
            if (x[j+1] < x[j+2])
            {
                b = x[j+1];
                x[j+1] = x[j+2];
                x[j+2] = b;
            }
            
        }
        
    }
    
}

int main()
{
    int x[100], i, koin, n, hasil[100];
    cout <<"Masukkan Banyak Koin : "; 
    cin >>n; 
    cout <<endl;
    cout <<"Masukkan jenis Koin : " <<endl;

    for (i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    cout <<endl;

    system("cls");
    Koin(x, n);
    cout <<"Koin Yang Tersedia : " <<endl;

    for (i = 1; i <= n; i++)
    {
        cout <<x[i];
        cout <<endl;
    }
    cout <<endl;
    cout <<"Masukkan Koin Yang Ingin Ditukar : ";
    cin >>koin;
    cout <<endl;

    for (i = 1; i <= n; i++)
    {
        hasil[i] = koin / x[i];
        koin = koin % x[i];
    }

    for (i = 1; i <= n; i++)
    {
        cout <<"Koin " <<x[i];
        cout <<" sebanyak : " <<hasil[i]; 
        cout <<endl;
    }
    cout <<endl;
    cout <<"======================== \n";
    cout <<"Hapiz Nuddin Setiadi \n" <<"20190801364 \n";
    

    system("pause");
    return 0;
}

