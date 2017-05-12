#include<iostream>
using namespace std;

char nilai;

int main ()
{
	cout << "======================================\n";
	cout << "===     Program pengkonversian     ===\n";
	cout << "===         nilai Sederhana        ===\n";
	cout << "===                                ===\n";
	cout << "===   credit by : M. Danil Rafiqi  ===\n";
	cout << "======================================\n";
	cout << "Masukkan nilai ";
	cin >> nilai ;
	cout << endl;
	switch (nilai)
	{
		case 'A' : cout << "Wow nilai kamu sangat sempurna\n";break;
		case 'B' : cout << "Nilai kamu sempurna\n";break;
		case 'C' : cout << "Nilai kamu cukup\n";break;
		case 'D' : cout << "Nilai kamu kurang\n";break;
		case 'E' : cout << "Nilai kamu sangat kurang\n";break;
		default : cout << "Masukkin nilai yang bener woyyyy\n"; 
	}
	cout << "Nilai kamu adalah " << nilai;
	return 0;
}
