#include<iostream>
using namespace std;

struct siswa
{
	char NAMA[20];
	char NIS;
	char ALAMAT[20];
	char PS[20];
};
struct siswa A;

int main()
{
	cout << "Masukkan nama";
	cin >> A.NAMA[20] ;
	cout << "Masukkan nis";
	cin >> A.NIS; 
	cout << "Masukkan alamat";
	cin>>A.ALAMAT[20] ;
	cout << "Masukkan ps";
	cin>>A.PS[20];
	cout<<"===================";
	cout<<"===================";
	cout<<"Terimakasih telah input data";
	
	cout <<A.NAMA[20]<<endl;
	cout <<A.NIS<<endl;
	cout <<A.ALAMAT[20]<<endl;
	cout <<A.PS[20]<<endl;
	return 0;
}
