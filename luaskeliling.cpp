#include<iostream>
using namespace std;

float fi;
int p,l,r,s;
float luas,keliling;
int pilihan;
char pilih;

int main()
{
	fi=3.14;
	cout<<"===========================================================\n";
	cout<<"== Program Penghitungan Luas & Keliling Persegi Panjang, ==\n";
	cout<<"== Luas & Keliling Lingkaran                             ==\n";
	cout<<"== Luas & Keliling Persegi                               ==\n";
	cout<<"===========================================================\n\n";
	
	do{
	cout<<"\n\nKamu Mau Menghitung apa ??? Pilih sesuai angka"<<endl;
	cout<<"1. Luas Persegi Panjang"<<endl<<"2. Keliling Persegi Panjang"<<endl<<
	"3. Luas Lingkaran"<<endl<<"4. Keliling Lingkaran"<<endl<<"5. Luas Persegi"<<endl<<
	"6. Keliling Persegi"<<endl<<endl<<"Masukkan Pilihanmu ";
	cin>>pilihan;
	switch(pilihan)
	{
		case 1 : 
			cout<<"\nProgram Penghitungan Luas Persegi Panjang";
			cout<<"\nMasukkan Panjang "; cin>>p;
			cout<<"Masukkan Lebar "; cin>>l;
			luas=p*l;
			cout<<"\nLuas dari persegi panjang adalah "<<luas;break;
		case 2 :
			cout<<"\nProgram Penghitungan Keliling Persegi Panjang";
			cout<<"\nMasukkan Panjang "; cin>>p;
			cout<<"Masukkan Lebar "; cin>>l;
			keliling=2*p+2*l;
			cout<<"\nKeliling dari persegi panjang adalah "<<keliling;break;
		case 3 :
			cout<<"\nProgram Penghitungan Luas Lingkaran";
			cout<<"\nMasukkan jari jari "; cin>>r;
			luas=fi*r*r;
			cout<<"\nLuas dari Lingkaran adalah "<<luas;break;
		case 4:
			cout<<"\nProgram Penghitungan Keliling Lingkaran";
			cout<<"\nMasukkan jari jari "; cin>>r;
			keliling=2*fi*r;
			cout<<"\nKeliling dari Lingkaran adalah "<<keliling;break;
		case 5:
			cout<<"\nProgram Penghitungan Luas Persegi";
			cout<<"\nMasukkan Panjang Sisi "; cin>>s;
			luas=s*s;
			cout<<"\nLuas dari Persegi adalah "<<luas;break;
		case 6 :
			cout<<"\nProgram Penghitungan Keliling Persegi";
			cout<<"\nMasukkan sisi "; cin>>s;
			keliling=4*s;
			cout<<"\nKeliling dari Persegi adalah "<<keliling;break;
		default :  cout << "Masukkan angka 1-6";
	}
	cout<<"\n\nMasih mau ngitung apa udah ?? pilih y untuk lanjut dan n untuk berhenti ";
	cin>>pilih;
	}
	while(pilih!='n');
	return 0;
}
