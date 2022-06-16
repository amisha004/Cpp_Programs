/* Write a program to implement concept of static class member. */

#include <iostream>
using namespace std;

class ABC{
	static int count;
	public:
		void counting()
		{
			count++;
			cout << count << endl;
		}
};
int ABC::count;

int main ()
{
	ABC c1,c2,c3;
	c1.counting();
	c2.counting();
	c3.counting();
	return 0;
}
