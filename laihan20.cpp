#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char nama[20];
	char alamat[35];
	char pekerjaan[40];
	
	
	cout<<"Masukan Nama Anda : ";
    cin.getline( nama, sizeof(nama));
    cout<<"Masukan Alamat Anda : ";
    cin.getline( alamat, sizeof(alamat));
    cout<<"Masukan Pekerjaan Anda : ";
    cin.getline(pekerjaan, sizeof(pekerjaan));
    cout<<"Nama Anda Adalah : "<<nama <<endl;
    cout<<"Alamat Anda : "<<alamat <<endl;
    cout<<"Pekerjaan Anda : "<<pekerjaan<<endl;
    
    return 0;
}
