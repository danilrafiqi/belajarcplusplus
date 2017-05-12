#include<iostream>
using namespace std;

int l,a,t;
int hitluassegitiga(int a,int t,int ls);

int main()
{
	cout <<"Masukkan Alas Segitiga"; cin>>a;
	cout <<"Masukkan tinggi Segitiga"; cin>>t;
	hitluassegitiga(a,t,l);
	cout<<"Luas Segitiga Adalah"<<l;
	
	return 0;
}
int hitluassegitiga(int a,int t,int ls)

{
	ls=a*t/2;
}
