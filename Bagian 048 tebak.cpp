#include<iostream.>
using namespace std;

int main()
{
	int angkasa,angkadu;
	angkasa=7;
	do
	{
	cout<<"Masukkan angka :";
	cin>>angkadu;
	if(angkasa!=angkadu)
	{
	cout<<"Tebakan Anda Salah\n";
	}
	else
	{
	cout<<"tebakan anda Betul";
	}
	}
	while(angkadu!=7);
}
