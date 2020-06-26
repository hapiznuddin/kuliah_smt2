#include <stdio.h>
#include <conio.h>
#include <iostream>

int a[100];
int max, min;

void maxmin(int i, int j) 
{
  int max1, min1, mid;
  if (i == j) 
  {
    max = min = a[i];   
  }
  else if (i == j-1) 
  {
    if (a[i] > a[j]) 
    {
      max = a[i];
      min = a[j];  
    }
    else 
    {
      max = a[j];
      min = a[i];  
    }
  }
  else 
  {
    mid = (i + j)/2;
    maxmin(i, mid);
    max1 = max;
    min1 = min;
    maxmin(mid + 1, j);
    if (max < max1)
      max = max1;
    if (min > min1)
      min = min1;  
  }
}

int main() 
{
  int i, num;
     
     std::cout <<"    Mencari Nilai Maximum Minimum    \n";
     std::cout <<"=====================================\n";
     std::cout <<"\nMasukkan Banyak Angka: ";
     std::cin >>num;
     std::cout <<"\nMasukkan Angka: \n";
    for(i = 0; i < num; i++) 
    {
      std::cin >>a[i]; 
    }

    max = a[0];
    min = a[0];
    maxmin(0, num-1);
    std::cout <<"\nNilai Angka Maximum : " <<max;
    std::cout <<"\nNilai Angka Minimum : " <<min;

    std::cout <<"\n\nHapiz Nuddin Setiadi\n";
    std::cout <<"20190801364\n\n";

    system("pause");
    return 0;
}