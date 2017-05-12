#include<iostream>
using namespace std;

int hari;

int main()
{
	cout << "Masukkan hari ke ";
	cin >> hari;
	switch(hari)
	{
		case 1 : cout << "senin\n"; break;
		case 2 : cout << "selasa\n"; break;
		case 3 : cout << "rabu\n"; break;
		case 4 : cout << "kamis\n"; break;
		case 5 : cout << "jumat\n"; break;
		case 6 : cout << "sabtu\n"; break;
		case 7 : cout << "minggu\n"; break;
		default : cout << "masukkin angka 1-7";
	}
	cout << "data yang kamu masukkin adalah hari" << (hari);
}
