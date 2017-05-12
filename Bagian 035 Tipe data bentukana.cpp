#include <iostream>
#include <conio.h>

struct mahasiswa { long npm;
					char matkul[20];
					char nilai[1];
					short sks;};
struct mahasiswa mhs[4];

main()
{
	int i;
	int a;
	printf ("input data mahasiswa\n");
	a=1;
	for (i=0;i<=3;i++)
	{
		printf ("data ke-%d\n",a);
		printf ("NPM = "); scanf ("%i",&mhs[i].npm);
		printf ("MATKUL = "); scanf ("%s",&mhs[i].matkul);
		printf ("NILAI = "); scanf ("%s",&mhs[i].nilai);
		printf ("SKS = "); scanf ("%i",&mhs[i].sks);
		printf ("\n");
		a++;
	}	//endfor
	
	printf ("\nNPM	MATKUL	NILAI	SKS\n");
	for (i=0;i<=3;i++)
	{
		printf ("%i%10s%10s%3i\n",mhs[i].npm,mhs[i].matkul,mhs[i].nilai,mhs[i].sks);
	}	//endfor
	getche ();
}
