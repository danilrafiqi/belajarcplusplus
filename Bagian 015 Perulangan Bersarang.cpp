#include<iostream>
using namespace std;

int a, b;

int main()
{
	for ( a=2; a<100; a++)
	{
		for ( b=2; b<=(a/b); b++)
		if (!(a%b))
		break;
		if (b > (a/b))
		cout << a << " adalah bilangan prima\n";
	}
	return 0;
}
