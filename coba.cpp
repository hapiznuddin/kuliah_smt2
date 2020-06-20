#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Mobil
{
    string brand, model;
    int tahun, kubikasi;
};


int main(){
    Mobil mobil[3];
    getline(cin, mobil[0].brand);

    cout << mobil[0].brand;
    return 0;
}