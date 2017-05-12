#include<iostream>
using namespace std;

int main ()
{
	int A[5];
	for ( int c=0; c<5; c++)
	{
		A[c] = c*10;
	}
	for (int c=0; c<5;c++)
	{
		cout <<A[c]<<endl;
	}
	return 0;
}

