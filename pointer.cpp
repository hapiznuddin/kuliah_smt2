#include <iostream>
#include <stdio.h>
#include <conio.h>
#define maks 99
using namespace std;

typedef struct 
{
    int tgl;
    int bln;
    int thn;
}Tanggal;

typedef struct
{
    char noID[maks];
    char nama[maks];
    char jenis_kelamin;
    Tanggal ttl;
}KTP;

typedef struct
{
    KTP ktp[maks];
    int jml;
}Data_KTP;

    Data_KTP data_ktp;
    Data_KTP *p;
    

int tampilData()
{
    system("cls");
    for (int i = 0; i < p-> jml; i++)
    {
        cout << "Data KTP " <<i+1 <<endl;
        cout << "No.ID          : " << p-> ktp[i].noID <<endl;
        cout << "Nama           : " << p-> ktp[i].nama <<endl; 
        cout << "Jenis Kelamin  : " << p-> ktp[i].jenis_kelamin <<endl; 
        cout << "Tanggal Lahir  : " << p-> ktp[i].ttl.tgl <<endl;
        cout << "Bulan          : " << p-> ktp[i].ttl.bln <<endl;
        cout << "Tahun          : " << p-> ktp[i].ttl.thn; cout <<endl;
        cout << "_________________________________________________" <<endl <<endl;    
    }
    return 0;
}

void inputData()
{   p = &data_ktp;
    cout <<"Masukkan Jumlah Data yang Ingin di Input: "; cin >> data_ktp.jml; 
    cout <<endl;
    (*p).ktp[(*p).jml];
    for (int i = 0; i < data_ktp.jml; i++)
    {
        
        cout << "Data KTP " <<i+1 <<endl;
        cout << "Masukkan No.ID          : "; cin >> data_ktp.ktp[i].noID;
        cout << "Masukkan Nama           : "; cin.ignore(1,'\n').getline(data_ktp.ktp[i].nama,30); 
        cout << "Masukkan Jenis Kelamin  : "; cin >> data_ktp.ktp[i].jenis_kelamin; data_ktp.ktp[i].jenis_kelamin = toupper(data_ktp.ktp[i].jenis_kelamin);
        cout << "Masukkan Tanggal Lahir  : "; cin >> data_ktp.ktp[i].ttl.tgl,
        cout << "Masukkan Bulan          : "; cin >> data_ktp.ktp[i].ttl.bln, 
        cout << "Masukkan Tahun          : "; cin >> data_ktp.ktp[i].ttl.thn; 
        cout << "_________________________________________________" <<endl <<endl;
    }
    system("pause");
}



void cariByTahun()
{   
    system("cls");
    int tahun;
    int *tahunP;
    tahunP = &tahun;
    tampilData();
    cout <<"Masukkan Tahun Kelahiran yang Ingin di Tampilkan : "; cin >> tahun; 
    cout <<endl;
    system("cls");
    for (int i = 0; i < p->jml; i++)
    {
        if (*tahunP != p->ktp[i].ttl.thn) continue;
    
        cout << "Data KTP " <<i+1 <<endl;
        cout << "No.ID          : " << p-> ktp[i].noID <<endl;
        cout << "Nama           : " << p-> ktp[i].nama <<endl; 
        cout << "Jenis Kelamin  : " << p-> ktp[i].jenis_kelamin <<endl; 
        cout << "Tanggal Lahir  : " << p-> ktp[i].ttl.tgl <<endl;
        cout << "Bulan          : " << p-> ktp[i].ttl.bln <<endl;
        cout << "Tahun          : " << p-> ktp[i].ttl.thn; cout <<endl;
        cout << "_________________________________________________" <<endl <<endl;    
    
    }
    system ("pause");
}

void tampilByJenisKelamin()
{
    system("cls");
    char jenisKelamin;
    char *jnsKelamin;
    jnsKelamin = &jenisKelamin;

    cout <<"Masukkan Jenis Kelamin yang Ingin di Tampilkan (L / P) : "; cin >> *jnsKelamin;
    *jnsKelamin = toupper(*jnsKelamin);
    cout <<endl;
    system("cls");
    for (int i = 0; i < p->jml; i++)
    {
        if(*jnsKelamin != p->ktp[i].jenis_kelamin) continue;

        cout << "Data KTP " <<i+1 <<endl;
        cout << "No.ID          : " << p-> ktp[i].noID <<endl;
        cout << "Nama           : " << p-> ktp[i].nama <<endl; 
        cout << "Jenis Kelamin  : " << p-> ktp[i].jenis_kelamin <<endl; 
        cout << "Tanggal Lahir  : " << p-> ktp[i].ttl.tgl <<endl;
        cout << "Bulan          : " << p-> ktp[i].ttl.bln <<endl;
        cout << "Tahun          : " << p-> ktp[i].ttl.thn; cout <<endl;
        cout << "_________________________________________________" <<endl <<endl;    
    
    }
    system("pause");
}
    
void edit()
{    
    system("cls");
    int editData;
    int *editDataP;
    editDataP = &editData;
        
    tampilData();
    cout << "Pilih Data yang Ingin di Edit : "; cin >> *editDataP;
    *editDataP -= 1;
    cout << "Data KTP " <<(*editDataP+1) <<endl;
    cout << "Masukkan No.ID          : "; cin >> data_ktp.ktp[*editDataP].noID;
    cout << "Masukkan Nama           : "; cin.ignore(1,'\n').getline(data_ktp.ktp[*editDataP].nama,30); 
    cout << "Masukkan Jenis Kelamin  : "; cin >> data_ktp.ktp[*editDataP].jenis_kelamin; data_ktp.ktp[*editDataP].jenis_kelamin = toupper(data_ktp.ktp[*editDataP].jenis_kelamin);
    cout << "Masukkan Tanggal Lahir  : "; cin >> data_ktp.ktp[*editDataP].ttl.tgl,
    cout << "Masukkan Bulan          : "; cin >> data_ktp.ktp[*editDataP].ttl.bln, 
    cout << "Masukkan Tahun          : "; cin >> data_ktp.ktp[*editDataP].ttl.thn;
    cout << "_________________________________________________" <<endl <<endl;

    system("pause");               
}


int main()
{
    int pilih;
    do
    {
        system("cls");
        cout <<"--Program Data KTP--" <<endl;
        cout <<"1. Input Data " <<endl;
        cout <<"2. Mencari Data Berdasarkan Tahun Kelahiran " <<endl;
        cout <<"3. Menampilkan Data Berdasarkan Jenis Kelamin " <<endl;
        cout <<"4. Edit Data " <<endl;
        cout <<"5. Tampilkan Data "<<endl;
        cout <<"6. Keluar " <<endl <<endl;
        cout <<"Pilihan Anda : "; cin >> pilih; 
        cout <<endl;

        switch(pilih)

        
        {
            case 1:
                inputData();
                break;
            
            case 2:
                cariByTahun();
                break;
            
            case 3:
                tampilByJenisKelamin();
                break;
            
            case 4:
                edit();
                break;
            
            case 5:
                tampilData(); system("pause");
                break;
        }

    } while (pilih != 6);
    system("cls");
    cout <<"Nama : Hapiz Nuddin Setiadi \n";
    cout <<"NIM  : 20190801364  \n"; 
    cout <<"  -- Thank you :) -- " <<endl;
    system("pause");
    return 0;
}
