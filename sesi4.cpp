#include<iostream>
#include<string>
using namespace std;
void vocal(string line)
{
	char cari;
	int vokal, konsonan, numerik,space;
	string hurufVokal, hurufKonsonan, angkaNumerik;	 
	vokal = konsonan = space = numerik = 0;
	for(int i=0;i <= line[i];i++)
	{
		if(line[i]=='a' || line[i]=='i' || line[i]=='u' || line[i]=='e' || line[i]=='o'
		   || line[i]=='A' || line[i]=='I' || line[i]=='U' || line[i]=='E' || line[i]=='O')
		{
			++vokal;
			hurufVokal+=line[i];
		}
		else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&&line[i]<='z'))
		{
			++konsonan;
			hurufKonsonan+=line[i];
		}
		else if ((line[i]==' ' || line[i] ==' '))
		{
			++space;
		}
		else if ((line[i]>=0&&line[i]<=150))
		{
			++numerik;
			angkaNumerik+=line[i];
		}	
	}	
	cout << "Vokal : "<<vokal<<" = "<<hurufVokal<<endl;
	cout << "konsonan : "<<konsonan<<" = "<<hurufKonsonan<<endl;
	cout << "Numerik : "<<numerik<<" = "<<angkaNumerik<<endl;
	cout<<"Yang Dicari = ";
	cin>>cari;
	bool found = false;
	for(int i=0;i <=line[i];i++)
	{
		if(cari == line[i])
	{
		cout<<cari<<" Telah ditemukan pada urutan sring ke "<<i+1<<endl;
		found = true;
	}
	}
	if (found == false){
		cout <<cari<<" Tidak ditemukan\n";
	}
}
int main()
{
	string line;
	cout << "Masukan Kalimat = " ; getline(cin,line); 
    vocal(line);
    system("pause");
    return 0;	
}

