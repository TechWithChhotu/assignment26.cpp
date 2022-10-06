// Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box
#include <iostream>
using namespace std;
class Box
{
private:
    int length, breadth, height;

public:
    Box()
    {
        cout << "Enter length , breadth & height of a box: ";
        cin >> length >> breadth >> height;
    }
    int volume()
    {
        return length * breadth * height;
    }
};
int main()
{
    Box b1;
    cout << "Volume of a box is " << b1.volume();
    return 0;
}