#include<stdio.h>
using namespace std;

float nilai1,nilai2;
double rataan;

main()
{
	printf("Masukkan Nilai Pertama : ");
	scanf("%f",&nilai1);
	printf("Masukkan Nilai Kedua : ");
	scanf("%f",&nilai2);
	
	rataan =(nilai1+nilai2)/2;
	printf("Rata Rata dari %f dan %f adalah %f",nilai1,nilai2,rataan);
}
