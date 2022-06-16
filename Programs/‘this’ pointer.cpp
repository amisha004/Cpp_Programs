/* Write a program to implement concept of ‘this’ pointer. */

#include <iostream>
using namespace std;

class ABC{
	public:
		int a;
		void display(int a)
		{
			this->a=a;
			cout << "Value of a is " << a << endl;
		}
};

int main()
{
	ABC obj1, obj2;
	obj1.display(10);
	obj2.display(20);
	return 0;
}
