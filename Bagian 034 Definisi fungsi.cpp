#include<iostream>
using namespace std;

int maks (int num1, int num2);

int main()
{
	int a=100;
	int b=200;
	int ret;
	
	ret = maks(a,b);
	cout << "nilai maksimum adalah :"<< ret <<endl;
	return 0;
}


int maks (int num1, int num2)
{
	int hasil;
	
	if (num1>num2)
	hasil = num1;
	else
	hasil =num2;
	
	return hasil;
}
