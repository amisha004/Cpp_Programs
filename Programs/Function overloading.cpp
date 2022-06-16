/* Write a program to implement concept of function overloading (area calculation). */

#include <iostream>
using namespace std;

int area (int);			//area of square
float area (float, float);			// area of rectangle		

int main ()
{
	cout << area (5) << endl;
	cout << area (2.5, 6.52);
	return 0;
}

int area (int a)
{
	return (a*a);
}

float area (float a, float b)
{
	return (a*b);
}
