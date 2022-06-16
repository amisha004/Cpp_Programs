/* Write a program to implement concept of unary operator overloading. */

#include<iostream>
using namespace std;

class IncreDecre
{
        int a, b;
    public:
        void input()
        {
                cout << "Enter Two Numbers: " << endl;
                cin >> a;
                cin >> b;
        }
        void operator--()
        {
                a--;
                b--;
        }
        void operator++()
        {
                a++;
                b++;
        }
        void display()
        {
                cout << "A: " << a << endl;
                cout << "B: " << b << endl;
        }
};


int main()
{
        IncreDecre id;
        id.input();
        --id;
        cout<<"After Decrementing: " << endl;
        id.display();
        ++id;
        ++id;
        cout<<"After Incrementing: " << endl;
        id.display();
        return 0;
}
