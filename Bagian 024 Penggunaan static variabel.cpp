#include<iostream>
using namespace std;

int contoh ()
{
	static int A=0;
	A=A+10;
	return A;
}
int main()
{
	int x,y,z;
	x= contoh();
	y= contoh();
	z= contoh();
	
	cout << x;
	cout << y;
	cout << z;
}
