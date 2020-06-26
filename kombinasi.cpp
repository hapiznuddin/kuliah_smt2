#include<iostream>

using namespace std;

int factorial (int n){
    if(n==1){
        return 1;
    }  else {
        return n*factorial(n-1);
    }
}

int kombinasi (int n, int r){
    if (n < r){
        return (0);
    } else {
        return (factorial(n)/factorial(r)*factorial(n/r));
    }
}int main(){
    int bil1;
    int bil2;

    cout<<"Program Kombinasi"<<endl;
    cout<<"====================================="<<endl;
    cout<<endl;
    cout<<"Masukkan Sebuah Bilangan Bulat [Integer]"<<endl;
    cout<<"bilangan n = ";cin>>bil1;
    cout<<"bilangan r = ";cin>>bil2;
    cout<<kombinasi(bil1, bil2);
}


    

