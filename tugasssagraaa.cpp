#include <iostream>
#include <string>
//Jagratara ali
//240121077
using namespace std;


struct Mahasiswa {
    string npm;
    string nama;
    float nilaiMid;
    float nilaiSemester;
    float nilaiAkhir;
    char nilaiHuruf;
};


float hitungNilaiAkhir(float nilaiMid, float nilaiSemester) {
    return (0.4 * nilaiMid) + (0.6 * nilaiSemester);
}


char tentukanNilaiHuruf(float nilaiAkhir) {
    if (nilaiAkhir >= 80 && nilaiAkhir <= 100)
        return 'A';
    else if (nilaiAkhir >= 70 && nilaiAkhir <= 79)
        return 'B';
    else if (nilaiAkhir >= 55 && nilaiAkhir <= 69)
        return 'C';
    else if (nilaiAkhir >= 40 && nilaiAkhir <= 54)
        return 'D';
    else
        return 'E';
}

int main() {
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa (maks 100): ";
    cin >> jumlahMahasiswa;

   
    if (jumlahMahasiswa > 100) {
        cout << "Jumlah mahasiswa tidak boleh lebih dari 100.\n";
        return 1;
    }

    Mahasiswa mahasiswa[100];

   
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nData Mahasiswa ke-" << (i + 1) << ":\n";
        cout << "NPM: ";
        cin >> mahasiswa[i].npm;
        cin.ignore();
        cout << "Nama: ";
        getline(cin, mahasiswa[i].nama);
        cout << "Nilai Mid: ";
        cin >> mahasiswa[i].nilaiMid;
        cout << "Nilai Semester: ";
        cin >> mahasiswa[i].nilaiSemester;

       
        mahasiswa[i].nilaiAkhir = hitungNilaiAkhir(mahasiswa[i].nilaiMid, mahasiswa[i].nilaiSemester);
        mahasiswa[i].nilaiHuruf = tentukanNilaiHuruf(mahasiswa[i].nilaiAkhir);
    }

   
    cout << "\n\n=== Data Nilai Ujian Pemrograman C++ ===\n";
    cout << "Dosen: Budiman, S.Si\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nMahasiswa ke-" << (i + 1) << ":\n";
        cout << "NPM            : " << mahasiswa[i].npm << endl;
        cout << "Nama           : " << mahasiswa[i].nama << endl;
        cout << "Nilai Mid      : " << mahasiswa[i].nilaiMid << endl;
        cout << "Nilai Semester : " << mahasiswa[i].nilaiSemester << endl;
        cout << "Nilai Akhir    : " << mahasiswa[i].nilaiAkhir << endl;
        cout << "Nilai Huruf    : " << mahasiswa[i].nilaiHuruf << endl;
    }

    return 0;
}
