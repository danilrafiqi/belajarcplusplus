#include<iostream>
using namespace std;

struct mahasiswa {	long npm;
					char nama[20];
					int nilai[3];
				};
struct mahasiswa mhs;
int a,i;

int main()
{
	cout << "Memasukkan Nilai dalam Array\n";
	cout << "NPM ="; cin >> mhs.npm;
	cout << "Nama ="; cin >> mhs.nama;
	a=1;
	for(i=0;1<=2;i++)
	{
		cout << "Nilai Ke - %i ",a;
		cin >> mhs.nilai[i];
		a++;
	}
	cout << "NPM Anda : %i dan Nama Anda %s: ",mhs.npm,mhs.nama;
	cout << "Nilai Anda Adalah ";
	a=1;
	for(i=0;1<=2;i++)
	{
		cout << "Nilai ke %i : %i",a,mhs.nilai[i];
		a++;
	}
	cout << "Tekan Enter";
	return 0;
}
