#include <iostream>
#include <string>
//Jagratara ali
//240121077
using namespace std;

float hitungPajak(float gaji) {
    return gaji * 0.05;
}

float hitungGajiKotor(float gaji, float tunjangan) {
    return gaji + tunjangan;
}

float hitungGajiBersih(float gajiKotor, float pajak, float pinjaman) {
    return gajiKotor - pajak - pinjaman;
}

int main() {
    string nama, golongan, kodeJabatan;
    float gaji = 0, tunjangan = 0, pinjaman, pajak, gajiKotor, gajiBersih;
    char lanjut;

    do {
        cout << "Masukkan Nama Pegawai: ";
        getline(cin, nama);
        
        cout << "Masukkan Golongan (Ia, IIa, IIIa, Ib, IIb, IIIb): ";
        cin >> golongan;

       
        if (golongan == "Ia") gaji = 500000;
        else if (golongan == "IIa") gaji = 750000;
        else if (golongan == "IIIa") gaji = 1000000;
        else if (golongan == "Ib") gaji = 1500000;
        else if (golongan == "IIb") gaji = 1750000;
        else if (golongan == "IIIb") gaji = 2500000;
        else {
            cout << "Golongan tidak valid.\n";
            continue;
        }

        cout << "Masukkan Kode Jabatan (Dir, Sek, WDir, Stf): ";
        cin >> kodeJabatan;

        
        if (kodeJabatan == "Dir") tunjangan = 450000;
        else if (kodeJabatan == "Sek") tunjangan = 300000;
        else if (kodeJabatan == "WDir") tunjangan = 375000;
        else if (kodeJabatan == "Stf") tunjangan = 200000;
        else {
            cout << "Kode jabatan tidak valid.\n";
            continue;
        }

        cout << "Masukkan Pinjaman: ";
        cin >> pinjaman;

       
        pajak = hitungPajak(gaji);
        gajiKotor = hitungGajiKotor(gaji, tunjangan);
        gajiBersih = hitungGajiBersih(gajiKotor, pajak, pinjaman);

        
        cout << "\n=== Slip Gaji Pegawai ===\n";
        cout << "Nama Pegawai   : " << nama << endl;
        cout << "Golongan       : " << golongan << endl;
        cout << "Kode Jabatan   : " << kodeJabatan << endl;
        cout << "Gaji           : Rp " << gaji << endl;
        cout << "Tunjangan      : Rp " << tunjangan << endl;
        cout << "Pinjaman       : Rp " << pinjaman << endl;
        cout << "Pajak          : Rp " << pajak << endl;
        cout << "Total Gaji Kotor: Rp " << gajiKotor << endl;
        cout << "Total Gaji Bersih: Rp " << gajiBersih << endl;

        
        cout << "\nMasih ingin menghitung gaji lagi? (Y/T): ";
        cin >> lanjut;
        cin.ignore(); 
    } while (lanjut == 'Y' || lanjut == 'y');

    cout << "Program selesai.\n";
    return 0;
}
