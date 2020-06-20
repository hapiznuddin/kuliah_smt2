#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

int main(){
    
    int i, s;
    char h = 64, nama[4][5][22]={
        "Rifki", "Destian", "Vienie", "Andre", "Mia",
        "Della", "Vanya", "Vio", "Indri", "Nilna",
        "Hakim", "Bagus", "Firman", "Amin", "Awan",
        "Ramadhan", "Gilang", "Lingga", "Rizki", "Kevin"
    };

    cout<<"Daftar Nama Kelompok : \n";

    for (i=0; i<4; i++){
        ++h;
        cout<<" kelomok "<<h;

        for (s=0; s<5; s++){
            cout<<"\n\t"<<i+1<<". "<<nama[i][s];
        }
        cout<<"\n";
    }
    getch();
}