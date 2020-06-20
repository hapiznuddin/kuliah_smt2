#include <iostream>
#include <stdlib.h>
#include <conio.h>

int ajg[100], ajg2[100];
int n;

void tukar(int a, int b){
    int t;
    t = ajg[b];
    ajg[b] = ajg[a];
    ajg[a] = t;
}

void bubbleSort()
{
    for(int i=1; i<n; i++)
    {
        for (int j=n-1; j>=i; j--)
        {
            if (ajg[j]<ajg[j-1]) tukar(j,j-1);            
        }
    }
    std::cout <<"Hasil dari bubble sort : " <<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout <<ajg[i]<<" ";
    }
    std::cout <<std::endl;   
    std::cout <<"bubble sort selesai!" << std::endl;
}

void selectionSort()
{
    int cok, i, j;
        for (i=0; i<n-1; i++)
        {
            cok = i;
            for (j=i+1; j<n; j++)
            {
                if (ajg[j] < ajg[cok]) cok = j;
            }
            if (cok != i) tukar(cok,i);    
        }
    std::cout <<"Hasil dari selection sort : " <<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout <<ajg[i]<<" ";
    }
    std::cout <<std::endl;
    std::cout<<"selection sort selesai!"<<std::endl;    
}

void insertionSort()
{
    int ndas,i,j;
    for (i=1; i<n; i++)
    {
        ndas = ajg[i];
        j = i-1;
        while (ajg[j] > ndas && j >= 0)
        {
            ajg[j+1] = ajg[j];
            j--;
        }
        ajg[j+1] = ndas;
    }
    std::cout <<"Hasil dari insertion sort : " <<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout <<ajg[i]<<" ";
    }
    std::cout <<std::endl;
    std::cout<<"insertion sort selesai!"<<std::endl;
}

void merge (int bawah, int atas, int tengah)
{
    int i, j, k, ndas[atas-bawah+1];
    i = bawah;
    k = 0;
    j = tengah + 1;

    while (i <= tengah && j <= atas)
    {
        if (ajg[i] < ajg[j])
        {
            ndas[k] = ajg[i];
            k++;
            i++;
        } 
        else
        {
            ndas[k] = ajg[j];
            k++;
            j++;
        } 
    }

    while (i <= tengah)
    {
        ndas[k] = ajg[i];
        k++;
        i++;
    }
    while (j <= atas)
    {
        ndas[k] = ajg[j];
        k++;
        j++;
    }
    for (i = bawah; i <= atas; i++)
    {
        ajg[i] = ndas[i-bawah];
    }
}
void mergeSort(int *ajg, int bawah, int atas)
{
    int tengah;
    if (bawah < atas)
    {
        tengah = (bawah + atas)/2;
        mergeSort(ajg, bawah, tengah);
        mergeSort(ajg, tengah+1, atas);
        
        merge (bawah, atas, tengah);
    }
}

void quickSort (int L, int R)
{
    int i, j;
    int tengah;
    i = L;
    j = R;
    tengah = ajg[(L+R) / 2];
    do
    {
        while (ajg[i] < tengah) i++;
        while (ajg[j] > tengah) j--;
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
        std::cin>>ajg[i];
        ajg2[i] = ajg[i];
    }
}

void tampil()
{
    std::cout<<"data : "<<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout<<ajg[i]<<" ";
    }
    std::cout<<std::endl;
}

void acakLagi()
{
    for (int i = 0; i < n; i++)
    {
        ajg[i] = ajg2[i];
    }
    std::cout<<"Data sudah teracak!"<<std::endl;
}

int main()
{
int choise;
system("cls");
    do
    {
        system("cls");

        std::cout<<"Menu Sorting"<<std::endl;
        std::cout<<"========================"<<std::endl;
        std::cout<<"1. Input Data"<<std::endl;
        std::cout<<"2. Bubble Sort"<<std::endl;
        std::cout<<"3. Selection Sort"<<std::endl;
        std::cout<<"4. Insertion Sort"<<std::endl;
        std::cout<<"5. Merge Sort"<<std::endl;
        std::cout<<"6. Quick Sort"<<std::endl;
        std::cout<<"7. Tampilkan Data"<<std::endl;
        std::cout<<"8. Acak Data"<<std::endl;
        std::cout<<"9. Exit"<<std::endl;
        std::cout<<"   Pilihan Anda : "; std::cin>>choise;
        switch (choise)
        {
            case 1:input(); break;
            case 2:bubbleSort(); break;
            case 3:selectionSort(); break;
            case 4:insertionSort(); break;
            case 5:mergeSort(ajg, 0,n-1);
            std::cout <<"Hasil dari merge sort : " <<std::endl;
            for (int i = 0; i < n; i++)
            {
                std::cout <<ajg[i]<<" ";
            }
            std::cout <<std::endl;
            std::cout<<"merge sort selesai!"<<std::endl;
            break;

            case 6:quickSort(0,n-1);
            std::cout <<"Hasil dari quick sort : " <<std::endl;
            for (int i = 0; i < n; i++)
            {
                std::cout <<ajg[i]<<" ";
            }
            std::cout <<std::endl;
            std::cout<<"quick sort selesai!"<<std::endl;
            break;

            case 7:tampil(); break;
            case 8:acakLagi(); break;
        }
    getch();
    } 
    while (choise != 9);     
}