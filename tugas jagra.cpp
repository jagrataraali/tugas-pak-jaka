#include <iostream>
#include <string>
#include <iomanip>
//tugas jagratara ali

using namespace std;

int main() {
    const int maxKaryawan = 10;
    string nama[maxKaryawan], jabatan[maxKaryawan];
    float gaji[maxKaryawan], pinjaman[maxKaryawan], pajak[maxKaryawan], gajiBersih[maxKaryawan];

    for (int i = 0; i < maxKaryawan; i++) {
        cout << "GAJI KARYAWAN STMIK PENUSA\n";

        cout << "Nama pegawai: ";
        cin.ignore();  
        getline(cin, nama[i]);

        cout << "Jabatan: ";
        getline(cin, jabatan[i]);

        cout << "Gaji: ";
        cin >> gaji[i];

        cout << "Pinjaman: ";
        cin >> pinjaman[i];

        pajak[i] = 0.15 * gaji[i];
        gajiBersih[i] = gaji[i] - (pinjaman[i] + pajak[i]);

        cout << "\nGaji bersih: " << fixed << setprecision(2) << gajiBersih[i] << endl;
        cout << "----------------------------------\n";
    }

    cout << "\nData Karyawan:\n";
    for (int i = 0; i < maxKaryawan; i++) {
        cout << "Nama pegawai: " << nama[i] << endl;
        cout << "Jabatan: " << jabatan[i] << endl;
        cout << "Gaji: " << gaji[i] << endl;
        cout << "Pinjaman: " << pinjaman[i] << endl;
        cout << "Pajak: " << pajak[i] << endl;
        cout << "Gaji bersih: " << gajiBersih[i] << endl;
        cout << "----------------------------------\n";
    }

    return 0;
}

