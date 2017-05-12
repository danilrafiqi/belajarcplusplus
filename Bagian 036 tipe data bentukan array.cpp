#include<iostream>
using namespace std;

struct mahasiswa {
					long nim;
					char nama[20];
					int nilai[3];
				};
struct mahasiswa mhs[4];
int a,b,i,j;

int main ()
{
	cout<< "Memasukkan data pada array bro\n";
	cout<< "==============================\n";
	a=1;
	for(i=0;i<=3;i++)
	{
		cout<< "data ke "<<a;
		cout<< "\nNIM = "; cin >> mhs[i].nim;
		cout<< "Nama = "; cin >> mhs[i].nama;
		b=1;
		for(j=0;j<=2;j++)
		{
			cout <<"nilai ke " <<b <<" ";
			cin >> mhs[i].nilai[j];
			b++;
		}
		a++;
	}
	cout<<"\ndata mahasiswa\n";
	for(i=0;i<=3;i++)
	{
		cout<<mhs[i].nim<<mhs[i].nama;
		for(j=0;j<=2;j++)
		{
			cout<<mhs[i].nilai[j];
		}
		cout<<"\n";
	}
	return 0;
}
