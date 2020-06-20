#include <iostream>
#include <string>
using namespace std;

struct Alamat{
    string namaJalan, kota, provinsi;
    int nomorRumah;
};

struct TTL{
    string tempat, bulan;
    int tgl, tahun;
};


struct Mhs{
    string nama, nim;
    Alamat alamatMhs;
    TTL ttlMhs;
};

main(){
    Alamat alamat;
    TTL ttl;
    Mhs mhs[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Mahasiswa " <<i+1 <<endl;
        cout << "Masukkan NIM            : ", cin >> mhs[i].nim;
        cout << "Masukkan Nama Mahasiswa : ", cin.ignore(1,'\n'), getline(cin, mhs[i].nama), cout <<endl;
        cout << "Alamat" <<endl;
        cout << "Masukkan Nama Jalan     : ", cin.ignore(0,'\n'),getline(cin, mhs[i].alamatMhs.namaJalan);
        cout << "Masukkan Nomor Rumah    : ", cin >> mhs[i].alamatMhs.nomorRumah;
        cout << "Masukkan Kota           : ", cin.ignore(1,'\n'),getline(cin, mhs[i].alamatMhs.kota);
        cout << "Masukkan Provinsi       : ", getline(cin, mhs[i].alamatMhs.provinsi), cout <<endl;
        cout << "TTL" <<endl;
        cout << "Masukkan Tempat Lahir   : ", getline(cin, mhs[i].ttlMhs.tempat);
        cout << "Masukkan Tanggal        : ", cin >> mhs[i].ttlMhs.tgl;  
        cout << "Masukkan Bulan          : ", cin >> mhs[i].ttlMhs.bulan;
        cout << "Masukkan Tahun          : ", cin >> mhs[i].ttlMhs.tahun, cout <<endl;

        system("cls");
    }

    
    
    for (int i = 0; i < 5; i++)
    {  
        cout << "Mahasiswa " <<i+1 <<endl;
        cout << "Nama Mahasiswa : " <<mhs[i].nama <<endl;
        cout << "NIM            : " <<mhs[i].nim <<endl;
        cout << "Alamat : "<<mhs[i].alamatMhs.namaJalan << " No. " <<mhs[i].alamatMhs.nomorRumah << " Kota " <<mhs[i].alamatMhs.kota << " Provinsi " <<mhs[i].alamatMhs.provinsi <<endl;
        cout << "TTL : " <<mhs[i].ttlMhs.tempat << ", " <<mhs[i].ttlMhs.tgl << " - " <<mhs[i].ttlMhs.bulan << " - " <<mhs[i].ttlMhs.tahun <<endl;
        cout << "====================================" <<endl;
    }

    cout << "Hapiz Nuddin Setiadi \n" "20190801364 \n";
    
    system("pause");
    return 0;
    
}
