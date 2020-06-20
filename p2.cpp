#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    float bil1,bil2,hasil;
    cout << "Masukan Bil 1:";
    cin >> bil1;

    cout << "Masukkan Bil 2:"; 
    cin >> bil2;

    hasil = bil1*bil2;
    cout<<"Hasil kali dari "<<bil1<<" dan "<<bil2<<" adalah "<<hasil;
    getch();
}