#include<iostream>
#define max 10
using namespace std;


int main ()
{
	int A[max];
	for ( int c=1; c<max; c++)
	{
		A[c] = c*10;
	}
	for (int c=1; c<max;c++)
	{
		cout <<A[c]<<endl;
	}
	return 0;
}
