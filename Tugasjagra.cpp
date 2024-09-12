#include<iostream>
#include<iomanip>
//Jagratara Ali

using namespace std;

int main(){
	
	float penjualan,komisi;
	cout<<"Masukan Jumlah Penjualan:";
	cin>>penjualan;
	if(penjualan<=500000){
		komisi=penjualan*0.10;
	}else{
		komisi=(500000*0.10)+((penjualan-500000)*0.15);
	}
	cout<<"Komisi Yang Diperoleh:"<<komisi<<endl;
	
	
	
	
	
	
	return 0;
}
