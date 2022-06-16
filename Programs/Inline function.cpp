/* Write a program to find cubic values using inline function. */

#include <iostream>
using namespace std;

inline float cube (float a)
{
	return (a*a*a);
}

int main()
{
	float x;
	cout << "Enter a value: ";
	cin >> x;
	cout << cube (x);
	return 0;
}
