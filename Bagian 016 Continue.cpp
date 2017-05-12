#include<iostream>
using namespace std;

int a=10;

int main()
{
	do
	{
		if (a==15)
		{
			a=a+1;
			continue;
		}
		cout << "nilai a " << a << endl;
		a=a+1;
	}
	while ( a < 20);
	return 0;
}
