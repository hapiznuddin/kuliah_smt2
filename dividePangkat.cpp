#include <iostream>
#include <cstdlib>
#include <cmath>
#include <math.h>

using namespace std;

int pangkat(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        if (n % 2 == 1)
        {
            return (pangkat(a, n/2) * pangkat(a, n/2)*a);
        }
        else
        {
            return (pangkat(a, n/2) * pangkat(a, n/2));
        } 
    }

}

int main()
{
    int a;
    int n;
    cout <<"Masukkan Angka : "; cin >>a;
    cout <<endl;
    cout <<"Masukkan Pangkat : "; cin >>n;
    cout <<endl;
    cout <<"Hasil " <<a <<" pangkat " <<n <<" = " <<pangkat(a, n) <<endl;
    cout <<endl;
    return 0;
}