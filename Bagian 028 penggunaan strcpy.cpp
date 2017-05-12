#include<iostream>
#include<cstring>
using namespace std;

char s1[20];
char* s2;
int main()
{
	s2="ini contoh salinan string";
	strcpy(s1,s2);
	cout <<s1<<endl;
	return 0;
}
