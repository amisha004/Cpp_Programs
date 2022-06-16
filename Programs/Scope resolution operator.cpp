/* Write a program to us the concept of scope resolution operator. */

#include <iostream>
using namespace std;

int m=10; 

int main()
{
	int m=20;
	{
		int k=m;
		int m=30;
		
		cout << "We are in inner block" << endl;
		cout << "k= " << k << endl;
		cout << "m= " << m << endl;
		cout << "::m= " << ::m << endl;
	}
	cout << "We are in outer block" << endl;
	cout << "m= " << m << endl;
	cout << "::m= " << ::m << endl;	
	return 0;
}
