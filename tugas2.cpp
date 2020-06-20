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
    Mhs mhs;

    alamat.namaJalan = "Jl.Markisa";
    alamat.kota = "Kab. Tangerang";
    alamat.provinsi = "Banten";
    alamat.nomorRumah = 21;
    ttl.tempat = "Tangerang";
    ttl.tgl = 21;
    ttl.bulan ="Maret";
    ttl.tahun = 1998;

    mhs.nama = "Hapiz Nuddin Setiadi";
    mhs.nim = "20190801364";
    mhs.alamatMhs = alamat;
    mhs.ttlMhs = ttl;

    cout << "Nama Mahasiswa : " <<mhs.nama <<endl;
    cout << "NIM            : " <<mhs.nim <<endl <<endl;
    cout << "Alamat"<<endl;
    cout << "Nama Jalan     : " <<mhs.alamatMhs.namaJalan <<endl;
    cout << "Nomor Rumah    : " <<mhs.alamatMhs.nomorRumah <<endl;
    cout << "Kota           : " <<mhs.alamatMhs.kota <<endl;
    cout << "Provinsi       : " <<mhs.alamatMhs.provinsi <<endl <<endl;
    cout << "TTL" <<endl;
    cout << "Tempat         : " <<mhs.ttlMhs.tempat <<endl;
    cout << "Tanggal        : " <<mhs.ttlMhs.tgl <<endl;  
    cout << "Bulan          : " <<mhs.ttlMhs.bulan <<endl;
    cout << "Tahun          : " <<mhs.ttlMhs.tahun <<endl;
    cout << "===================================\n";
    cout << "Hapiz Nuddin Setiadi \n" "20190801364 \n";

    system("pause");
    return 0;

}