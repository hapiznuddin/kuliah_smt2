#include <iostream>
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
