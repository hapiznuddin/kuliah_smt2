#include <iostream>
#include <math.h>

using namespace std;
 
int main()
{
    float t1a, t2a, t3a, t1b, t2b, t3b, jalurA, jalurB;

    cout <<"   Mencari Jalur Rute Terpendek   " <<endl;
    cout <<"==================================" <<endl <<endl;
    cout <<"Masukkan Jarak Jalur A Titik Pertama : "; cin >>t1a;
    cout <<"Masukkan Jarak Jalur A Titik Kedua   : "; cin >>t2a;
    cout <<"Masukkan Jarak Jalur A Titik Ketiga  : "; cin >>t3a;
    cout <<"Masukkan Jarak Jalur B Titik Pertama : "; cin >>t1b;
    cout <<"Masukkan Jarak Jalur B Titik Kedua   : "; cin >>t2b;
    cout <<"Masukkan Jarak Jalur B Titik Ketiga  : "; cin >>t3b;

    jalurA = t1a + t2a + t3a;
    jalurB = t1b + t2b + t3b;
    cout <<endl;

    if (jalurA > jalurB)
    {
    cout <<"Jarak Terpanjang : Jalur A " <<jalurA <<" KM" <<endl;
    cout <<"Jarak Terpendek  : Jalur B " <<jalurB <<" KM" <<endl; 
    } 
    else
    {
    cout <<"Jarak Terpanjang : Jalur B " <<jalurB <<" KM" <<endl;
    cout <<"Jarak Terpendek  : Jalur A " <<jalurA <<" KM" <<endl;
    }
    cout <<endl;
    system("pause");
    return 0;
}