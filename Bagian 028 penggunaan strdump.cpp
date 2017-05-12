#include<iostream>
#include<cstring>
using namespace std;

char* s1;
char* s2;
int main()
{
	s1="contoh nyalin";
	s2=strdup (s1);
	
	cout <<s2<<endl;
	return 0;
}
