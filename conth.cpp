#include<conio.h>
#include<iostream>
using namespace std;

typedef struct {
        char nama[30];
        char alamat[30];
        char status[30];
        char pekerjaan[30];
        char agama[30];
        char goldarah[30];
    }ktp;
    ktp k;
    ktp *t = &k;
void input(){
    cout<<" * Input Data\n\n";
    cout<<" Nama              = ";cin.getline(k.nama,30);
    cout<<" Alamat            = ";cin.getline(k.alamat,30);
    cout<<" Status            = ";cin.getline(k.status,30);
                cout<<" Pekerjaan         = ";cin.getline(k.pekerjaan,30);
    cout<<" Agama             = ";cin.getline(k.agama,30);
    cout<<" Golongan Darah    = ";cin.getline(k.goldarah,30);
    cout<<"\n";
}
void cetak(){
    cout<<" * Cetak Data\n\n";
    cout<<" Nama           = "<<k.nama,30;cout<<endl;
    cout<<" Alamat         = "<<k.alamat,30;cout<<endl;
    cout<<" Status         = "<<k.status,30;cout<<endl;
    cout<<" Pekerjaan      = "<<k.pekerjaan,30;cout<<endl;
    cout<<" Agama          = "<<k.agama,30;cout<<endl;
    cout<<" Golongan Darah = "<<k.goldarah,30;cout<<endl;
}
void edit(){
    cout<<" * Edit Data\n\n";
    cout<<" Nama             = ";cin>>t->nama,30;
    cout<<" Alamat           = ";cin>>t->alamat,30;
    cout<<" Status           = ";cin>>t->status,30;
    cout<<" Pekerjaan        = ";cin>>t->pekerjaan,30;
    cout<<" Agama            = ";cin>>t->agama,30;
    cout<<" Golongan Darah   = ";cin>>t->goldarah,30;
    cout<<"\n";
}
void border(){
    cout<<"--------------------------------\n";
    cout<<"          PROGRAM KTP\n";
    cout<<"--------------------------------\n";
}
void thx(){
    border();
    cout<<"\n\n\n";
    cout<<"          TERIMA KASIH\n";
    cout<<"\n";
}

    main (){
    char yn;
    border();
    input();
   
    border();
    cetak();
    cout<<"\n\n Ket: Hanya 1x edit";
    cout<<"\n Anda ingin ubah data? [y/n] = ";cin>>yn;
   
    switch (yn){
    case 'y':
    border();
    edit();
   
    border();
    cetak();
    getch();
   
    thx();
    break;
    case 'n':
    thx();
    break;}}