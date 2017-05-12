#include<iostream>
using namespace std;

int a ;
int b ;

int main()
{
	cin >> a ;
	
	switch(a)
	{
		case 1: cout << "ini bagian switch luar" <<endl;
		cin >> b;
		switch (b)
		{
			case 2 : cout << "ini bagian switch dalam" <<endl;
		}
	}
	cout << "nilai a adalah" <<a<<endl;
	cout << "nilai b adalah" <<b<<endl;
	return 0;
}
