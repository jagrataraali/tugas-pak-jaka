#include <iostream>
#include <string>
using namespace std;

int main()
 {
    
    string namaBarang;
    float harga, totalHarga, diskon, totalBayar;
    int jumlahJual;

    
    cout << "Masukkan Nama Barang: ";
    getline(cin, namaBarang);
    cout << "Masukkan Harga Barang: ";
    cin >> harga;
    cout << "Masukkan Jumlah Jual: ";
    cin >> jumlahJual;
    totalHarga = harga * jumlahJual;
    diskon = totalHarga * 0.10;
    totalBayar = totalHarga - diskon;
    cout << "\n===== PENJUALAN BARANG ELEKTRONIK =====" << endl;
    cout << "Nama Barang: " << namaBarang << endl;
    cout << "Harga per Barang: Rp" << harga << endl;
    cout << "Jumlah Jual: " << jumlahJual << endl;
    cout << "Total Harga: Rp" << totalHarga << endl;
    cout << "Diskon 10%: Rp" << diskon << endl;
    cout << "Total Bayar: Rp" << totalBayar << endl;

    return 0;
}
