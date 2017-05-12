#include<iostream>
using namespace std;

int nilai [9];
int p;

int main()
{
	for (p=0;p<10;p++)
	{
		nilai[p] = p +2;
	}
	for (p=0;p<10;p++)
	{
		cout << nilai[p];
	}
	return 0;
}


