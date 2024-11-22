#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

void buatfile();
void tulisfile();
void tambahfile();
void bacafile();

int main()
{
	int pilihan;
	
	do
	{
		cout<<"\n ===[ Menu Pemberkasan ]===\n";
		cout<<"1.Buat berkas baru\n";
		cout<<"2.Tulis isi berkas\n";	
		cout<<"3.Tambahkan tulisan keberkas\n";
		cout<<"4.Tampilkan isi berkas\n";
		cout<<"5.Keluar\n";
		cout<<"Pilihan menu (1-5):";
		cin>>pilihan;
		
		switch(pilihan)
		{
			case 1:
				buatfile();
				break;
			case 2:
				tulisfile();
				break;
			case 3:
				tambahfile();
				break;
			case 4:
				bacafile();
				break;
			default:
				cout<<"Keluar dari program\n";
				break;
		}
	}	
	while(pilihan != 5);
	
	return 0;
}

void buatfile()
{
	string berkas;
	cout<<"Masukan nama file baru : ";
	cin >> berkas;
	
	ofstream gas(berkas.c_str());
	if(gas.is_open())
	{
		gas.close();
		cout<<"File \""<< berkas <<"\"berhasil dibuat\n";
	}
	else cout<<"file \""<< berkas<<"\"tidak berhasil dibuat\n";
}

void tulisfile()
{
	string berkas, teks;
	cout<<"Masukkan nama file : ";
	cin>> berkas;
	
	ofstream gas(berkas.c_str(), ios::out);
	if(gas.is_open())
	{
		cin.ignore();
		cout<<"Masukan tulisan yang ingin di input ke dalam file \n";
		getline(cin, teks);
		gas<<teks<<endl;
		gas.close();
		cout<<"Tulisan berhasil di input kedalam berkas \""<<berkas<<"\"\n";
	}
	else cout<< "Tulisan pada berkas\""<<berkas<<"\"tidak berhasil di tambahkan \n";
}

void tambahfile()
{
	string berkas, teks;
	cout<<"Masukan nama file untuk di tamabahkan : ";
	cin>>berkas;
	
	ofstream gas(berkas.c_str(), ios::in);
	if(gas.is_open())
	{
		cin.ignore();
		cout<<"Masukan tulisan yang ingin di input ke dalam file\n";
		getline(cin, teks);
		gas<<teks<<endl;
		gas.close();
		cout<<"Tuisan berhasil input kedalam berkas\""<<berkas<<"\"\n";
	}
	else cout<< "Tulisan pada berkas\""<<berkas<<"\"tidak berhasil di tambahkan \n";
}

void bacafile()
{
	string berkas, baris;
	cout<<"Masukan nama file untuk di tampilkan: ";
	cin>> berkas;
	
	ifstream gas(berkas.c_str());
	if(gas.is_open())
	{
		cout<<"isi berkas \""<<berkas<<"\"berhasil dibuat\n";
		while( getline(gas, baris) )cout<<baris<<endl;
		gas.close();
	}
	else cout<<"Berkas\""<<berkas<<"\"tidak berhasil dibuat \n";
}























