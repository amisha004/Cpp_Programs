/* Write a program to implement the concept of Hybrid inheritance. */

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
class Derived2: public Base{
	public:
		void display3()
		{
			cout << "Display of derived 2" << endl;
		}
};
class Derived3: public Derived1, public Derived2{
	public:
		void display4()
		{
			cout << "Display of derived 3" << endl;
		}
};
 
int main()
{
	Derived3 d;
	//d.display1();		//-> compiler get confused through which class we need to call base class
	d.display2();
	d.display3();
	d.display4();
	return 0;
}
