// . Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.
#include <iostream>
using namespace std;
class StaticCount
{
    static int a;

public:
    static void display()
    {
        cout << a << endl;
        a++;
    }
};
int StaticCount::a = 1;
int main()
{
    StaticCount s1;
    s1.display();
    s1.display();
    s1.display();

    return 0;
}