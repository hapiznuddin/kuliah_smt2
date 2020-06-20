#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int panjangArray, angkaArray[50], i;
    float rataArray, total = 0;
    

    cout<<"Masukkan Panjang Array : "; cin>>panjangArray; cout <<endl;

    for(int i = 0; i < panjangArray; i++){
        cout<<"Input Array Indeks Ke "<<i+1<<" : "; cin>>angkaArray[i];
    }
    cout<<endl;

    for (int i = 0; i < panjangArray; i++){
        cout<<"Array Indek Ke "<<i+1<< " : "<<angkaArray[i];
        total = total + angkaArray[i];  cout <<endl;
    }
    cout<<endl;
    
    rataArray = total / panjangArray;
   
    cout<<"Jumlah Dari Array : "<<total <<endl;
    cout<<"Rata - Rata Dari Array : "<<rataArray <<endl;

    system("pause");
    return 0;    
    
}