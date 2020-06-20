#include<iostream>
#include<string>

using namespace std;

struct Mahasiswa {
    string nama, nim;
    
    struct Alamat{
        string namaJalan, kota, provinsi;
        int nomorRumah;
    } alamat;
    
    struct TanggalLahir{
        string bulan, tempat;
        int tanggal, tahun;
    } tanggalLahir;
    
};

main(){
   int i, jumlahMahasiswa;

   cout << "Jumlah Mahasiswa    : "; cin >> jumlahMahasiswa;

   Mahasiswa mhs[jumlahMahasiswa]; 

   for ( i = 0; i < jumlahMahasiswa ; i++)
   {   
       cout << "Mahasiswa " << i+1 << "\n\n"; 
       cout << "Masukan Nama Mahasiswa : "; cin.ignore( 30, '\n' ); getline(cin, (mhs[i].nama));  //jangan lupa cin ignore
       cout << "Masukan NIM Mahasiswa : "; cin >> mhs[i].nim ; cout << endl;
       cout << "-Alamat-" << endl;
       cout << "Masukan Nama Jalan : "; cin.ignore( 30, '\n' ); getline(cin, mhs[i].alamat.namaJalan);
       cout << "Masukan Nomor Rumah : "; cin >> mhs[i].alamat.nomorRumah;
       cout << "Masukan Kota : "; cin.ignore( 30, '\n' ); getline(cin, mhs[i].alamat.kota);
       cout << "Masukan Provinsi : "; getline(cin, mhs[i].alamat.provinsi); cout << endl;
       cout << "-TTL-" << endl;
       cout << "Masukan Tempat lahir : ";  getline(cin, mhs[i].tanggalLahir.tempat); 
       cout << "Masukan Tanggal lahir : "; cin >> mhs[i].tanggalLahir.tanggal; 
       cout << "Masukan Bulan lahir : "; cin.ignore( 30, '\n' ); getline(cin, mhs[i].tanggalLahir.bulan);
       cout << "Masukan Tahun lahir : "; cin >> mhs[i].tanggalLahir.tahun; 

       system("cls");
   }

   cout << "Jumlah Mahasiswa    : " << jumlahMahasiswa << "\n";
   
    for ( i = 0; i < jumlahMahasiswa; i++)  
    {
        cout << "Mahasiswa "<< i+1 << endl;
        cout << "Nama   : " << mhs[i].nama << endl;
        cout << "NIM    : " << mhs[i].nim << endl;
        cout << "Alamat :" << endl;
        cout << "   Jalan       : " << mhs[i].alamat.namaJalan << endl;
        cout << "   Nomor       : " << mhs[i].alamat.nomorRumah << endl;
        cout << "   Kota        : " << mhs[i].alamat.kota << endl;
        cout << "   Provinsi    : " << mhs[i].alamat.provinsi << endl;
        cout << "TTL    :" << endl;
        cout << "   Tempat      : " << mhs[i].tanggalLahir.tempat << endl;
        cout << "   Tanggal     : " << mhs[i].tanggalLahir.tanggal << endl;
        cout << "   Bulan       : " << mhs[i].tanggalLahir.bulan << endl;
        cout << "   Tahun       : " << mhs[i].tanggalLahir.tahun << "\n";
        cout << "=============================================\n";
    }

    cout << "Aulia Ilham Zukri\n";
    cout << "20190801368\n\n";
    
    system("pause");
    return 0;
}