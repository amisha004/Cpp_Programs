/* Write a program to implement the concept of copy constructor. */

#include <iostream>
using namespace std;

class ABC{
	public:
		int a, i;
		ABC(int n)
		{
			a=n;
			cout << "a=" << a << endl;
		}
		ABC(ABC &y)
		{
			i=y.a;
			cout << "i=" << i;
		}
};
