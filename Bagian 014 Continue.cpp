#include<iostream>
using namespace std;

int a;

int main()
{
	for (a=1; a<=10; a++)
	{
		cout << a << endl;
		if (a==7)
		{
			a=a+1;
			continue;
		}
	}
	return 0 ;
}


