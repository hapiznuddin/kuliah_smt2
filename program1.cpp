#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a;
    int b[5];
    for(a=0;a<5;a++){
        cout<<"Masukkan Angka Indeks ke ["<<a<<"] = ";
        cin>>b[a];
    }
    for(a=0;a<5;a++){
        cout<<"\nTampilan angka ke "<<a+1<<" = ";
        cout<<b[a];
    }
    getch();

}