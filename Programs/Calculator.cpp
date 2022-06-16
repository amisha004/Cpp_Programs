/* Write a program to make a simple calculator. */

#include <iostream>
using namespace std;

int main ()
{
	int a,b;
	char op;
	cout << "Enter number 1: ";
	cin >> a;
	cout << "Enter number 2: ";
	cin >> b;
	cout << "Enter operator (+,-,*,/,%): ";
	cin >> op;
	
	switch (op)
	{

		case '+':
			cout << a << '+' << b << '=' << a+b;
			break;
		case '-':
			cout << a << '-' << b << '=' << a-b;
			break;
		case '*':
			cout << a << '*' << b << '=' << a*b;
			break;
		case '/':
			cout << a << '/' << b << '=' << a/b;
			break;	
		case '%':
			cout << a << '%' << b << '=' << a%b;
			break;											
	}
	return 0;
}
