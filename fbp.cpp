#include <iostream>

using namespace std;

int fpb(int a, int b)
{
    if(b <= a && a % b == 0)
    {
        return b;
    } 
    
    else if ( a < b )
    {
        return fpb(b, a);    
    } 
    
    else
    {
        return fpb(b, a % b);
    }
}


int main()
{
    int bil1;
    int bil2;

    cout <<"-Program Perhitungan FPB dari 2 Bilangan-" <<endl;
    cout << "Masukam Nilai Pertama = "; cin >> bil1;
    cout << "Masukan Nilai Kedua   = "; cin >> bil2;
    cout << "Hasil FPB = " << fpb (bil1, bil2) <<endl;

    system("pause");
    return 0;
}