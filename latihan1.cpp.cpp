#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nim;
    string nama;
    string alamat;
    int umur;
};

int main(){
    Mahasiswa mhs, mhs2;

    mhs.nim = "20180140106";
    mhs.umur = 24;
    mhs.nama = "Dede Chandra";
    mhs.alamat = "Balikpapan";
    
    cout << "Masukan NIM : ";
    cin >> mhs2.nim;
    cout << "Masukan Umur : ";
    cin >> mhs2.umur;
    cout << "Masukan Nama : ";
    cin >> mhs2.nama;
    cout << "Masukan Alamat : ";
    cin >> mhs2.alamat;

    cout << "NIM : " << mhs.nim;
    cout << "\nUmur : " << mhs.umur;
    cout << "\nNama : " << mhs.nama;
    cout << "\nAlamat : " << mhs.alamat;

    cout << "\n\nNIM : " << mhs2.nim;
    cout << "\nUmur : " << mhs2.umur;
    cout << "\nNama : " << mhs2.nama;
    cout << "\nAlamat : " << mhs2.alamat;
}

