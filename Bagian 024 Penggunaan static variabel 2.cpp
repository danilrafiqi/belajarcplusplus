#include<iostream>
using namespace std;

static int A=0;

int contoh ()
{
	
	A+=10;
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
	return 0;
}
