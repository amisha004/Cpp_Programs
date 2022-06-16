/* Write a program to implement the concept of multilevel inheritance. */

#include <iostream>
using namespace std;

class Base{
	public:
		void display1()
		{
			cout << "Display of base" << endl;
		}
};

class Derived1: public Base{
	public:
		void display2()
		{
			cout << "Display of derived 1" << endl;
		}
};

class Derived2: public Derived1{
	public:
		void display3()
		{
			cout << "Display of derived 2" << endl;
		}
};
 
int main()
{
	Derived2 d;
	d.display1();
	d.display2();
	d.display3();
	return 0;
}
