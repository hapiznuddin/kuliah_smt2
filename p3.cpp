#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    string sks,nim,nama,matkul;

    cout << "Masukkan Nama :";
    getline (cin,nama);

    cout << "Masukkan Matkul :";
    getline (cin,matkul);  

    cout << "Masukkan SKS :";
    cin >> sks;

    cout << "Masukkan NIM :";
    cin >> nim;

    float nilai1,nilai2,nilai3;
    cout << "Masukkan Nilai 1 :";
    cin >> nilai1;

    cout << "Masukkan Nilai 2 :";
    cin >> nilai2;

    nilai3=(nilai1 + nilai2)/2;
    cout<<"Nama Mahasiswa   : "<<(nama)<<"\n";
    cout<<"NIM              : "<<(nim)<<"\n";
    cout<<"Mata Kuliah      : "<<(matkul)<<"\n";
    cout<<"SKS              : "<<(sks)<<"\n";
    cout<<"Nilai Teori      : "<<(nilai1)<<"\n";
    cout<<"Nilai Praktek    : "<<(nilai2)<<"\n";
    cout<<"Nilai Akhir      : "<<(nilai3)<<"\n";
    getch();
    
}