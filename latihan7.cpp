#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	char npeg[20],njab[20];
	float gaji,pajak,pinjaman,gaber=0;
	
	cout<<"Nama toko : ";
	cin>>npeg;
	cout<<"harga : ";
	cin>>njab;
	cout<<setprecision(13);
	cout<<"jumlah jual : ";
	cin>>gaji;
	pajak=0.15*gaji;
	cout<<"diskon : "<<pajak<<endl;
	cout<<"total bayar : ";
	cin>>pinjaman;
	gaber=gaji-(pinjaman+pajak);
	cout<<"Gaji bersih : " << gaber<<endl;
	return 0;
}
