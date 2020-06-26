#include <iostream>
<<<<<<< HEAD
#include<conio.h>
using namespace std;

int main()
{

	string nim,nama,prodi,fakultas;
	cout << "Masukkan NIM:";
	getline (cin,nim);

	cout << "Masukkan Nama:";
	getline (cin,nama);

	cout << "Masukkan Prodi:";
	getline (cin,prodi);

	cout << "Masukkan Fakultas:";
	getline (cin,fakultas);

	system("CLS");
	cout << "NIM:" <<(nim)<<endl;
	cout << "NAMA:" <<(nama)<<endl;
	cout << "Prodi:" <<(prodi)<<endl;
	cout << "Fakultas:" <<(fakultas)<<endl;
}
=======
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
>>>>>>> 03b299209c3fd20743a737e549385cc51e01ff1c
