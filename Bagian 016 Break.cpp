#include<iostream>
using namespace std;

int a=10;

int main()
{
	do
	{
		cout << "nilai a : " << a << endl;
		a=a+1;
	if ( a > 15)
	{
		break;
	}
	}
	while ( a< 20 );
	return 0;
}
