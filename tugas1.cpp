#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Gaji{
    string nama;
    int jamKerja, jamLembur;
    const int gajiPerjam = 50000;
    const int gajiLemburPerjam = 15 * gajiPerjam;
    
};

int main(){
    Gaji gaji;
    int totalGaji, gajiNormal, gajiLembur;

    cout << "Masukkan Nama Karyawan : "; getline(cin,gaji.nama);

    cout << "Masukkan Jam Kerja     : "; cin >> gaji.jamKerja;

    if (gaji.jamKerja <= 7)
    {
        totalGaji = gaji.jamKerja * gaji.gajiPerjam;
    } else 
    {
        gaji.jamLembur = gaji.jamKerja - 7;
        gajiNormal = 7 * gaji.gajiPerjam ;
        gajiLembur = gaji.jamLembur * gaji.gajiLemburPerjam;     
        totalGaji = gajiNormal + gajiLembur;   
    }
    
    system("cls");
    cout << "Nama Karyawan  : "<< gaji.nama <<"\n";
    cout << "Jam Kerja      : "<< gaji.jamKerja <<"\n";
    cout << "Jam Lembur     : "<< gaji.jamLembur <<"\n";
    cout << "Total Gaji     : "<< totalGaji <<"\n";
    cout << "===============================\n";
    cout << "Hapiz Nuddin Setiadi \n" "20190801364 \n";

    system ("pause");
    return 0;    
}