#include<iostream>
using namespace std;

char nama[30];
char npm[30] ;
char ps[30];

int main ()
{
	cout << "Program Menampilkan Nama, NPM, dan Program Studi\n"
	<<"------------------------------------------------\n";
	cout << "Masukkan Nama : " ;
	cin >> nama;
	cout << "Masukkan NPM : " ;
	cin >> npm;
	cout << "Masukkan Program Studi : ";
	cin >> ps;
	"\n";
	cout << "Nama Anda Adalah : " << nama << "\n";	
	cout << "Npm Anda Adalah : " << npm << "\n";
	cout << "Program Studi Anda Adalah : " << ps;
	
	return 0;
}
