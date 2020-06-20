#include <iostream>
#include <stdlib.h>
#include <conio.h>

int data[100], data2[100];
int n;

void tukar(int a, int b){
    int t;
    t = data[b];
    data[b] = data[a];
    data[a] = t;
}

void bubbleSort()
{
    for(int i=1; i<n; i++)
    {
        for (int j=n-1; j>=i; j--)
        {
            if (data[j]<data[j-1]) tukar(j,j-1);            
        }
    }
    std::cout <<"Hasil dari bubble sort : " <<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout <<data[i]<<" ";
    }
    std::cout <<std::endl;   
    std::cout <<"bubble sort selesai!" << std::endl;
}

void exchangeSort()
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = (i+1); j < n; j++)
        {
            if (data[i] > data[j]) tukar(i,j);
        }
    }
    std::cout <<"Hasil dari exchange sort : " <<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout <<data[i]<<" ";
    }
    std::cout <<std::endl;
    std::cout<<"exchange sort selesai!" <<std::endl;
}

void selectionSort()
{
    int pos, i, j;
        for (i=0; i<n-1; i++)
        {
        pos = i;
            for (j=i+1; j<n; j++)
            {
                if (data[j] < data[pos]) pos = j;
            }
        if (pos != i) tukar(pos,i);    
        }
    std::cout <<"Hasil dari selection sort : " <<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout <<data[i]<<" ";
    }
    std::cout <<std::endl;
    std::cout<<"selection sort selesai!"<<std::endl;    
}

void insertionSort()
{
    int temp,i,j;
    for (i=1; i<n; i++)
    {
        temp = data[i];
        j = i-1;
        while (data[j] > temp && j >= 0)
        {
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = temp;
    }
    std::cout <<"Hasil dari insertion sort : " <<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout <<data[i]<<" ";
    }
    std::cout <<std::endl;
    std::cout<<"insertion sort selesai!"<<std::endl;
}

void merge (int low, int high, int mid)
{
    int i, j, k, temp[high-low+1];
    i = low;
    k = 0;
    j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (data[i] < data[j])
        {
            temp[k] = data[i];
            k++;
            i++;
        } 
        else
        {
            temp[k] = data[j];
            k++;
            j++;
        } 
    }

    while (i <= mid)
    {
        temp[k] = data[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        temp[k] = data[j];
        k++;
        j++;
    }
    for (i = low; i <= high; i++)
    {
        data[i] = temp[i-low];
    }
}
void mergeSort(int *data, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high)/2;
        mergeSort(data, low, mid);
        mergeSort(data, mid+1, high);
        
        merge (low, high, mid);
    }
}

void quickSort (int L, int R)
{
    int i, j;
    int mid;
    i = L;
    j = R;
    mid = data[(L+R) / 2];
    do
    {
    while (data[i] < mid) i++;
    while (data[j] > mid) j--;
    if (i <= j)
    {
        tukar(i,j);
        i++;
        j--;
    };
    }
    while (i < j);
    if (L < j) quickSort(L, j);
    if (i < R) quickSort(i, R);

}

void input()
{
    std::cout<<"Masukkan jumlah data : "; std::cin>>n;
    for (int i = 0; i < n; i++)
    {
        std::cout<<"Masukkan data ke-"<<(i+1)<<" = "; 
        std::cin>>data[i];
        data2[i] = data[i];
    }
}

void tampil()
{
    std::cout<<"Data : "<<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout<<data[i]<<" ";
    }
    std::cout<<std::endl;
}

void acakLagi()
{
    for (int i = 0; i < n; i++)
    {
        data[i] = data2[i];
    }
    std::cout<<"Data sudah teracak!"<<std::endl;
}

int main()
{
int pil;
system("cls");
    do
    {
    system("cls");
    system("title Program Sorting");
    std::cout<<"Menu Sorting"<<std::endl;
    std::cout<<"========================"<<std::endl;
    std::cout<<"1. Input Data"<<std::endl;
    std::cout<<"2. Bubble Sort"<<std::endl;
    std::cout<<"3. Exchange Sort"<<std::endl;
    std::cout<<"4. Selection Sort"<<std::endl;
    std::cout<<"5. Insertion Sort"<<std::endl;
    std::cout<<"6. Merge Sort"<<std::endl;
    std::cout<<"7. Quick Sort"<<std::endl;
    std::cout<<"8. Tampilkan Data"<<std::endl;
    std::cout<<"9. Acak Data"<<std::endl;
    std::cout<<"10. Exit"<<std::endl;
    std::cout<<"   Pilihan Anda : "; std::cin>>pil;
    switch (pil)
    {
    case 1:input(); break;
    case 2:bubbleSort(); break;
    case 3:exchangeSort(); break;
    case 4:selectionSort(); break;
    case 5:insertionSort(); break;
    case 6:mergeSort(data, 0,n-1);
    std::cout <<"Hasil dari merge sort : " <<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout <<data[i]<<" ";
    }
    std::cout <<std::endl;
    std::cout<<"merge sort selesai!"<<std::endl;
    break;
    case 7:quickSort(0,n-1);
    std::cout <<"Hasil dari quick sort : " <<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout <<data[i]<<" ";
    }
    std::cout <<std::endl;
    std::cout<<"quick sort selesai!"<<std::endl;
    break;
    case 8:tampil(); break;
    case 9:acakLagi(); break;
    }
    getch();
    } 
    while (pil != 10);     
}