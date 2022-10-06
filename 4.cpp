// Define a class Counter and Write a program to Show Counter using Constructor.
#include <iostream>
using namespace std;
class Counter
{
private:
    static int a;

public:
    Counter()
    {
        a++;
    }
    int showCounter()
    {
        return a;
    }

public:
};
int Counter::a;
int main()
{
    Counter w, x, y, z;
    cout << z.showCounter();
    return 0;
}