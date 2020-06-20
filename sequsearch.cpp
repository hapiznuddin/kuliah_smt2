#include<iostream>
using namespace std;

int cari(int data[], int n, int k)
{
	int posisi, i, ketemu;
	
	if (n <= 0)
		posisi = -1;
	else
	{
		ketemu = 0;
		i = 1;
		while ((i < n-1) &&! ketemu)
		if (data[i] == k)
		{
			posisi = i;
			ketemu = 1;
		}
		else 
		 i++;
		 
		if (!ketemu)
			posisi = 0;
	}
		return posisi;
}
int main ()
{
	int diacri, dicari;
	cout<<"{5,0,8,4,7,8,1,9}"<<endl;
	int data[8] = {5,0,8,4,7,8,1,9};
	cout<<"nilai yang dicari = ";
	cin>>dicari;
	
	cout <<"POSISI "<< dicari <<" dalam larik data : "
		<<cari(data, 8 ,dicari)<<endl;
    
	system("pause");
	return 0;
}
