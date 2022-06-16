/* Write a program to implement concept of single inheritance using public class. */

#include <iostream>
using namespace std;

class Base{
	public:
		void display1()
		{
			cout << "Display of base class" << endl;
		}
};

class Derived: public Base{
	public:
		void display2()
		{
			cout << "Display of derived class" << endl;
		}
};

int main()
{
	Derived d;
	d.display2();
	d.display1();
	return 0;
}
