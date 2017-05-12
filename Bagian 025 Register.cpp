#include<iostream>
using namespace std;

int hitung ( register int m, register int e)
{
	register int temp;
	temp=1;
	for ( ; e; e--)
	{
		temp = temp *m;
	}
}
int main()
{
	int x;
	x=hitung (5,3);
	cout << x <<endl;
	return 0;
}
