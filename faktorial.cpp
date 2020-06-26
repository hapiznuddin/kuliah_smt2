#include<iostream>
#include<conio.h>
using namespace std;

int factorial (int n){
    if(n==1){
        return 1;
    }  else {
        return n*factorial(n-1);
    }
}

int main(){
    int bil;

    cout<<"Program Faktorial dengan Rekrusif"<<endl;
    cout<<"====================================="<<endl;
    cout<<endl;
    cout<<"Masukkan Sebuah Bilangan Bulat [Integer]"<<endl;
    cout<<"bilangan = ";cin>>bil;
    cout<<factorial(bil);
}