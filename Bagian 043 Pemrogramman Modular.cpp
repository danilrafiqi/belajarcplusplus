#include<stdio.h>
using namespace std;

float nilai1,nilai2;
float rataan;
float hitung_rataan(int var1,int var2);
int hitung_jumlah (int pertama,int kedua);

main()
{
	printf("Masukkan Nilai Pertama : ");
	scanf("%f",&nilai1);
	printf("Masukkan Nilai Kedua : ");
	scanf("%f",&nilai2);
	
	rataan =hitung_rataan(nilai1,nilai2);
	
	printf("Rata Rata dari %f dan %f adalah %f",nilai1,nilai2,rataan);
}
float hitung_rataan(int var1,int var2)
{
	float jumlah;
	float rata;
	
	jumlah= hitung_jumlah (var1,var2);
	rata=jumlah/2;
	return rata;
}

int hitung_jumlah (int pertama,int kedua)
{
	int hasil;
	
	hasil=pertama+kedua;
	return hasil;
}
