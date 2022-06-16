/* Write a program to find average of two numbers. */

#include <iostream>
using namespace std;

int main()
{
	float a,b,avg;
	cout << "Enter value of a:";
	cin >> a;
	cout << "Enter value of b:";
	cin >>b;
	avg = (a+b)/2;
	
	cout << "Average of number = " << avg;
	return 0;
}
