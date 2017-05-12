#include<iostream>
#include<cstring>
using namespace std;

char s1[20];
char* s2;
int main()
{
	s1[20]='CONTOH';
	s2="salin string";
	strncpy(s1,s2,4);
	cout <<s1<<endl;
	return 0;
}
