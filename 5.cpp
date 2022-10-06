//  Define a class Date and write a program to Display Dateand initialise date object
// using Constructors.
#include <iostream>
using namespace std;
class Date
{
private:
    int days;
    int months;
    int years;

public:
    Date(int x, int y, int z)
    {
        days = x;
        months = y;
        years = z;
    }
    void Display()
    {
        cout << days << "/" << months << "/" << years << endl;
    }
};
int main()
{
    Date a1(2, 2, 2002);
    a1.Display();
    return 0;
}
