#include <iostream>
#include <string>
#include <iomanip>
//jagatara ali ni pak
using namespace std;

int main() {
    const int max_data = 100;
    string nama_barang[max_data];
    float harga[max_data];
    int jumlah_jual[max_data];
    float total_harga[max_data];
    float diskon[max_data];
    float total_bayar[max_data];
    float total_pendapatan = 0;
    int count = 0;

    while (count < max_data) {
        cout << "\nPENJUALAN BARANG ELEKTRONIK" << endl;

        cout << "Nama barang: ";
        cin >> nama_barang[count];
        cout << "Harga: ";
        cin >> harga[count];
        cout << "Jumlah jual: ";
        cin >> jumlah_jual[count];

        total_harga[count] = harga[count] * jumlah_jual[count];

        diskon[count] = total_harga[count] * 0.1; 

        total_bayar[count] = total_harga[count] - diskon[count];

        total_pendapatan += total_bayar[count];

        cout << fixed << setprecision(2);
        cout << "\nDetail Penjualan:" << endl;
        cout << "Nama barang: " << nama_barang[count] << endl;
        cout << "Total harga: " << total_harga[count] << endl;
        cout << "Diskon: " << diskon[count] << endl;
        cout << "Total bayar: " << total_bayar[count] << endl;

        count++;
        if (count < max_data) {
            char lagi;
            cout << "\nApakah Mau Input lagi (Y/T)? ";
            cin >> lagi;
            if (lagi != 'Y' && lagi != 'y') {
                break;
            }
        }
    }

    cout << "\nTotal Pendapatan: " << total_pendapatan << endl;
    cout << "Jumlah Data yang diinput: " << count << endl;

    return 0;
}

