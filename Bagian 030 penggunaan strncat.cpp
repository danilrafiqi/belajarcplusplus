#include<iostream>
#include<cstring>
using namespace std;



int main()
{
	char* s1;
	char* s2;
	char* spasi="  ";
	
	s1="nama saya adalah ";
	s2="muhamad danil rafiqi";
	strncat(s1,s2,12);
	cout << s1<<endl;
	return 0;
}
