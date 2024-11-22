#include <iostream>
#include <conio.h>
using namespace std;

const int GAJI_POKOK_PER_JAM = 2000;

// Fungsi untuk menghitung gaji pokok
int pokok(int jamKerja) {
    return jamKerja * GAJI_POKOK_PER_JAM;
}

// Fungsi untuk menghitung lembur
int lembur(int jamKerja) {
    if (jamKerja > 7) {
        return (jamKerja - 7) * (1.5 * GAJI_POKOK_PER_JAM);
    } else {
        return 0;
    }
}

// Fungsi untuk menghitung uang makan
int makan(int jamKerja) {
    if (jamKerja >= 8 && jamKerja < 10) {
        return 1500;
    } else if (jamKerja >= 10) {
        return 2500;
    } else {
        return 0;
    }
}

// Fungsi untuk menghitung uang jasa lembur
int jasa(int jamKerja) {
    if (jamKerja >= 9) {
        return 3000;
    } else {
        return 0;
    }
}

// Fungsi utama
int main() {
    int jamKerja;
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    int gajiPokok = pokok(jamKerja);
    int uangLembur = lembur(jamKerja);
    int uangMakan = makan(jamKerja);
    int uangJasa = jasa(jamKerja);
    int gajiTotal = gajiPokok + uangLembur + uangMakan + uangJasa;

    cout << "\n=== Rincian Gaji Harian ===\n";
    cout << "Gaji Pokok     : Rp " << gajiPokok << endl;
    cout << "Uang Lembur    : Rp " << uangLembur << endl;
    cout << "Uang Makan     : Rp " << uangMakan << endl;
    cout << "Uang Jasa      : Rp " << uangJasa << endl;
    cout << "Gaji Total     : Rp " << gajiTotal << endl;

    getch();
    return 0;
}
