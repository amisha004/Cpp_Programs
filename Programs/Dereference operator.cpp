/* Write a program to implement concept of manipulation of pointers using dereference operator. */

#include <iostream>
using namespace std;

int main()
{
	int x=10;
	int *ptr;
	ptr= &x;
	cout << "Value of x is " << x << endl;
	cout << "Value of ptr is " << ptr << endl;
	cout << "Value of *ptr is " << *ptr << endl;
	return 0;
}
