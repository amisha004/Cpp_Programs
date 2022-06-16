#include <iostream>
#include <stdlib.h>
using namespace std;

int change (int &a);

int main()
{
	int original=10;
	cout << "Original value is " << original << endl;
	cout << "Return value is " << change (original) << endl;
	cout << "Value after function call is " << original << endl;
	return 0;
}

int change (int &a)
{
	a=20;
	return a;
}
