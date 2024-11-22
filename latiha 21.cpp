#include<iostream>
#include<conio.h>

using namespace std;

float luas(float panjang, float lebar);
int main()
{
	float panjang_se, lebar_se, luas_se ;
	
	cout <<"Program menghitung Luas Segiempat \n";
	/*input panjang danlebar*/
	cout<<"\n\t Panjang : ";
	cin>> panjang_se ;
	cout<<"\n\t Lebar : ";
	cin>> lebar_se ;
	/*menghitung luas segiempat*/
	luas_se = luas( panjang_se, lebar_se );
	cout<<"\n\n Luas Segiempat = "<< luas_se;
}
float luas( float panjang , float lebar)
{
	return (panjang * lebar);
}
