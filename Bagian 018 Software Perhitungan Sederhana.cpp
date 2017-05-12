#include<iostream>

using namespace std;

int s;
int hasil;
int a,b;

int main ()
{
	cout << "Software Perhitungan Sederhana\n" << "---------------------------------\n" 
	<< "Pilih Perhitungan!!!\n" << "1. Penjumlahan\n" << "2. Pengurangan\n" << "3. Perkalian\n"
	<< "4. Pembagian\n\n" ;
	cout << "masukkan pilihanmu ";
	cin >> s;
	
	if (s==1)
	{
		cout << "Masukkan angka yang akan dijumlahkan!!!\n"
		<< "Angka pertama ";
		cin >> a;
		cout << "Angka kedua ";
		cin >> b;
		hasil = a + b;
		cout << "Hasilnya adalah = " << hasil;
	}
	else if (s==2)
	{
		cout << "Masukkan angka yang akan dikurangkan!!!\n"
		<< "Angka pertama ";
		cin >> a;
		cout << "Angka kedua ";
		cin >> b;
		hasil = a - b;
		cout << "Hasilnya adalah = " << hasil;
	}
	else if (s==3)
	{
		cout << "Masukkan angka yang akan dikalikan!!!\n"
		<< "Angka pertama ";
		cin >> a;
		cout << "Angka kedua ";
		cin >> b;
		hasil = a * b;
		cout << "Hasilnya adalah = " << hasil;
	}
	else if (s==4)
	{
		cout << "Masukkan angka yang akan dibagi!!!\n"
		<< "Angka pertama ";
		cin >> a;
		cout << "Angka kedua ";
		cin >> b;
		hasil = a / b;
		cout << "Hasilnya adalah = " << hasil;
		getch();
	}
	
	return 0;
}
