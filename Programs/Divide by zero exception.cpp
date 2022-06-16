/* Write a program to perform exception handling for divide by zero. */

#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Enter two numbers: " << endl;
	cin >> a >> b;
	try
	{
		if (b==0)
		{
			throw b;
		}
		else
		{
			cout << "Division is " << (a/b);
		}
	}
	catch (int)
	{
		cout << "Exception caught! Value of b is zero";
	}
	return 0;
}
