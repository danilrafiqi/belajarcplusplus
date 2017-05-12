#include<iostream>
using namespace std;

char nama[30];
int gaji;
int tunjangan;
int pajak;
int totalgaji;

int main ()
{
	cout << "Masukkan Nama : " ; cin >> nama;
	cout << "Masukkan Gaji Pokok : " ; cin >> gaji;
	tunjangan = gaji*10/100;
	pajak = gaji*5/100;
	totalgaji = gaji+tunjangan-pajak;
	cout << "Nama anda : " << nama <<endl;
	cout << "Total Gaji anda adalah : " << totalgaji;
	return 0;
}
