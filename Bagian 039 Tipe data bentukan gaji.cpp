#include<iostream>
using namespace std;

struct gaji {	char nama[20];
				char jabatan[20];
				int gapok;
				int jam;
				int lembur;
				int total;
				int pajak=10/100;
				int upahlembur;		
			};
struct gaji gaj[3];
int a,b,j,k;

int main()
{
	cout<<"===============================================\n";
	cout<<"===========Program Menghitung Gaji=============\n";
	cout<<"===============================================\n\n";
	
	for(a=1;a<=3;a++)
	{
		cout << "Masukkan Nama "; cin >> gaj[a].nama;
		cout << "Masukkan Jabatan (direktur/manajer/programmer) "; cin >> gaj[a].jabatan;
		cout << "Masukkan Jam Kerja "; cin >> gaj[a].jam;
		
		if (gaj[a].jabatan[20] = 'direktur' ){ gaj[a].gapok=10000000;}
		else if (gaj[a].jabatan[20] = 'manajer' ){ gaj[a].gapok=9000000;}
		else { gaj[a].gapok=15000000;}
		
		gaj[a].lembur=gaj[a].jam-8;
		gaj[a].upahlembur=gaj[a].lembur*100000;
		gaj[a].total=gaj[a].gapok-gaj[a].pajak+gaj[a].upahlembur;
		
		
	}
	cout << "Nama  Jabatan  Gaji_Pokok  Lembur  Upah_lembur_perjam(100000)  Total_Gaji";
	
	for(a=1;a<=3;a++)
	{
		cout<<gaj[a].nama<<gaj[a].jabatan<<gaj[a].gapok<<gaj[a].lembur<<gaj[a].upahlembur<<gaj[a].total;
	}
	cout<<"\nPajaknya 10%";
	return 0;
}
