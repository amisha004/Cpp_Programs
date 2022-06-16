/* Write a program to implement the concept of multiple inheritance. */

#include <iostream>
using namespace std;

class Base1{
	public:
		void display1()
		{
			cout << "Display of base 1" << endl;
		}
};

class Base2{
	public:
		void display2()
		{
			cout << "Display of base 2" << endl;
		}
};

class Derived: public Base1, public Base2{
	public:
		void display3()
		{
			cout << "Display of derived" << endl;
		}
};
 
int main()
{
	Derived d;
	d.display1();
	d.display2();
	d.display3();
	return 0;
}
