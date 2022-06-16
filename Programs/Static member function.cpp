/* Write a program to implement the concept of static member function. */

#include <iostream>
using namespace std;

class ABC{
	static int count;
	public:
		static void counting()
		{
			count ++;
			cout << "Number of objects: " << count << endl;
		}
};
int ABC::count;

int main ()
{
	ABC :: counting();
	ABC :: counting();
	return 0;
}
