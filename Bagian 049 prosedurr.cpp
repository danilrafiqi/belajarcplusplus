#include<iostream>
using namespace std;

int nilai1,nilai2;
float rataan;
int hitungrataan(int nilai1,int nilai2);
int hitungjumlah(int a,int b);

int main()
{
	cout<<"Masukkan nilai ke 1 dan 2";
	cin>>nilai1;
	cin>>nilai2;
	
	rataan=hitungrataan(nilai1,nilai2);
	cout<<rataan;
}

int hitungrataan(int a,int b)
{
	int jumlah;
	float rata;
	
	jumlah=hitungjumlah(a,b);
	rata=jumlah/2;
}
int hitungjumlah(int pertama, int kedua)
{
	int hasil;
	hasil=pertama+kedua;
}
