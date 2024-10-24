#include <iostream>
#include <string>
using namespace std;
//JAGRATARA ALI
//NIM:240121077
//TEKNIK INFORMATIKA^_-

struct Jurusan {
    string namaJurusan;
    int pembayaranAwal;
    int jumlahCicilan;
    int besarCicilan;
};

int main() {
    string namaMahasiswa, NPM, kode;
    int pembayaranKe, sisaUangKuliah;
    
    Jurusan jurusan[4] = {
        {"Sistem Informasi", 2100000, 7, 300000},
        {"Teknik Informatika", 2500000, 7, 300000},
        {"Komputer Akuntansi", 1750000, 6, 300000},
        {"Manajemen Informatika", 1500000, 6, 250000}
    };
    
   
    cout << "Nama Mahasiswa: ";
    getline(cin, namaMahasiswa);
    cout << "NPM: ";
    getline(cin, NPM);
    cout << "Kode Jurusan (SI/TI/KA/MI): ";
    cin >> kode;
    cout << "Pembayaran Ke: ";
    cin >> pembayaranKe;
    
    
    int index = -1;
    if (kode == "SI") index = 0;
    else if (kode == "TI") index = 1;
    else if (kode == "KA") index = 2;
    else if (kode == "MI") index = 3;
    
    if (index != -1) {
        int uangKuliah = jurusan[index].pembayaranAwal + (jurusan[index].jumlahCicilan * jurusan[index].besarCicilan);
        int uangKuliahTerbayar = jurusan[index].pembayaranAwal + (pembayaranKe * jurusan[index].besarCicilan);
        sisaUangKuliah = uangKuliah - uangKuliahTerbayar;
        
        
        cout << "\n--- Rincian Pembayaran ---" << endl;
        cout << "Nama Mahasiswa: " << namaMahasiswa << endl;
        cout << "NPM: " << NPM << endl;
        cout << "Jurusan: " << jurusan[index].namaJurusan << endl;
        cout << "Uang Kuliah Total: Rp " << uangKuliah << endl;
        cout << "Uang Kuliah Terbayar: Rp " << uangKuliahTerbayar << endl;
        cout << "Sisa Uang Kuliah: Rp " << sisaUangKuliah << endl;
    } else {
        cout << "Kode jurusan tidak valid!" << endl;
    }
    
    return 0;
}


