#include<iostream>
using namespace std;

int a = 21;
int b = 10;
int c;

int main ()
{
	c = a + b;
	cout << "1 : Nilai C adalah = " << c << '\n';
	c = a - b;
	cout << "2 : Nilai C adalah = " << c << '\n';
	c = a * b;
	cout << "3 : Nilai C adalah = " << c << '\n';
	c = a / b;
	cout << "4 : Nilai C adalah = " << c << '\n';
	c = a % b;
	cout << "5 : Nilai C adalah = " << c << '\n';
	c = a++;
	cout << "6 : Nilai C adalah = " << c << '\n';
	c = a--;
	cout << "7 : Nilai C adalah = " << c << '\n';
	return 0;
}
