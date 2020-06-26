#include <iostream>

using namespace std;

int pangkat (int x, int n)
{
    if (n == 0)
    {
        return (1);
    } else
    {
        return (x * pangkat(x,n-1));
    }
}

int main()
{
    int bil1;
    int bil2;
    
    cout <<"--- Program Pangkat --- \n";

    cout <<"Masukkan Bilangan 1 : "; cin >> bil1;
    cout <<"Masukkan Bilangan 2 : "; cin >> bil2; cout <<endl;

    cout <<bil1 << " ^ " <<bil2 <<" = " <<pangkat(bil1,bil2) <<endl;

    cout <<"=========================== \n";
    cout <<"Nama : Hapiz Nuddin Setiadi \n";
    cout <<"NIM  : 20190801364 \n";

    system("pause");
    return 0;
}