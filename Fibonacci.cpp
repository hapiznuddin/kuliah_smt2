#include<iostream>
using namespace std;

int fibonacci (int n){
    if (n==1 || n==2){
        return (1);
    } else {
        return (fibonacci (n-1)+fibonacci(n-2));
    }
}
int main(){
    int bil;

     cout<<"Program Fibonacci"<<endl;
    cout<<"=====================================";
    cout<<endl;
    cout<<"Masukkan Sebuah Bilangan Bulat [Integer]"<<endl;
    cout<<"bilangan = ";cin>>bil;
    cout<<fibonacci(bil);
}