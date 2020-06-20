#include<iostream>
#include<sstream>
#include<string>
 
using namespace std;

struct DataGaji
{
    string nama;
    int jamKerja, jamLembur;
    const int feePerjam = 50000;  
    int feeOTPerjam = 15 * feePerjam;
    
};

main(){
    
    DataGaji gaji1;
    int totalGaji, gajiNormal, gajiOT;
    
    cout << "Masukan Nama Karyawan      : "; getline(cin, gaji1.nama);
    cout << "Masukan jam kerja karyawan : "; cin >> gaji1.jamKerja;
    
    if (gaji1.jamKerja <= 7)
    {
        totalGaji = gaji1.jamKerja * gaji1.feePerjam;
    } else
    {
        gaji1.jamLembur = gaji1.jamKerja - 7;
        gajiNormal = 7 * gaji1.feePerjam;
        gajiOT = gaji1.jamLembur * gaji1.feeOTPerjam;
        totalGaji = gajiNormal + gajiOT;
    }
    
    system("cls");
    cout << "Nama       : "<< gaji1.nama << "\n";
    cout << "Jam kerja  : "<< gaji1.jamKerja << "\n";
    cout << "Jam lembur : "<< gaji1.jamLembur << "\n";
    cout << "Total Gaji : "<< totalGaji << "\n";

    system("pause");

    return 0 ;

}