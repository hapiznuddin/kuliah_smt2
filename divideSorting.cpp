#include <iostream>
#include <conio.h>

using namespace std;
void tukar(int &a, int &b) 
{    
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void tampil(int *array, int size) 
{
    for(int i = 0; i < size; i++)
        cout <<array[i] <<" ";
    cout <<endl;
}

void merge(int *array, int kiri, int tengah, int kanan) 
{
    int i, j, k, nKiri, nKanan;
    nKiri = tengah - kiri + 1; 
    nKanan = kanan - tengah;

    int kiriArr[nKiri]; 
    int kananArr[nKanan];
    for(i = 0; i < nKiri; i++)
        kiriArr[i] = array[kiri+i];
    for(j = 0; j < nKanan; j++)
        kananArr[j] = array[tengah + 1 + j];
    i = 0; 
    j = 0; 
    k = kiri;
   
    while(i < nKiri && j < nKanan) 
    {
        if(kiriArr[i] <= kananArr[j]) 
        {
            array[k] = kiriArr[i];
            i++;
        }
        else
        {
            array[k] = kananArr[j];
            j++;
    }
    k++;
    }

    while(i < nKiri) 
    {
        array[k] = kiriArr[i];
        i++; 
        k++;
    }
    while(j < nKanan) 
    {     
        array[k] = kananArr[j];
        j++; 
        k++;
    }
}

void mergeSort(int *array, int kiri, int kanan) 
{
    int tengah;
    if (kiri < kanan) 
    {
        int tengah = kiri + (kanan - kiri)/2;
        mergeSort(array, kiri, tengah);
        mergeSort(array, tengah + 1, kanan);
        merge(array, kiri, tengah, kanan);
    }
}

int main() {
    int n;
    cout <<"    Pengurutan Merge Sort    \n";
    cout <<"=============================\n";
    cout <<"Masukkan Banyak Data : ";
    cin >> n;
    int arr[n];   
    cout <<"Masukkan Data : " << endl;
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    cout <<endl;
    cout <<"Data Sebelum di Sorting : ";
    tampil(arr, n);
    cout <<endl;
    mergeSort(arr, 0, n-1);    
    cout <<"Data Setelah di Sorting : ";
    tampil(arr, n);
    cout <<endl ;

    cout <<"\nHapiz Nuddin Setiadi\n";
    cout <<"20190801364\n";

    system("pause");
    return 0;
}