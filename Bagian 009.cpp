#include<iostream>
using namespace std;

int a = 21;
int b = 10;
int c;

int main()
	
{
	if (a == b)
	{
		cout << "1 : a sama dengan b" << '\n';
	}
	else
	{
		cout << "1 : a tidak sama dengan b" << '\n';
	}
	if (a != b)
	{
		cout << "2 : a tidak sama dengan b" << '\n';
	}
	else
	{
		cout << "2 : a sama dengan b" << '\n';
	}
	if (a > b)
	{
		cout << "3 : a lebih besar dari b" << '\n';
	}
	else
	{
		cout << "3 : a tidak lebih besar dari b" << '\n';
	}
	if (a < b)
	{
		cout << "4 : a tidak lebih kecil dari b" << '\n';
	}
	else
	{
		cout << "4 : a lebih kecil dari b" << '\n';
	}
	if (a >= b)
	{
		cout << "5 : a lebih besar samadengan b" << '\n';
	}
	else
	{
		cout << "5 : a tidak lebih besar samadengan b" << '\n';
	}
	if (a <= b)
	{
		cout << "6 : a tidak lebih kecil samadengan b" << '\n';
	}
	else
	{
		cout << "6 : a lebih kecil samadengan b" << '\n';
	}	
	
	return 0;
}
