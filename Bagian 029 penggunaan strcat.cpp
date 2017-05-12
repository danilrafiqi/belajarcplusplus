#include<iostream>
#include<cstring>
using namespace std;



int main()
{
	char* s1;
	char* s2;
	char* spasi="  ";
	
	s1="teks";
	s2="gabung";
	strcat(s1,spasi);
	strcat(s1,s2);
	cout << s1<<endl;
	return 0;
}
