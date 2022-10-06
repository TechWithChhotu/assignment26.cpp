// Define a class Complex to represent a complex number with instance variables a and
// b to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)
#include <iostream>
using namespace std;
class Complex
{
private: // optional
    int r, i;

public:
    void SetData(int x, int y)
    {
        r = x;
        i = y;
    }
    void ShowData()
    {
        cout << " " << r << "+" << i << "i" << endl;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.r = r + c.r;
        temp.i = i + c.i;
        return temp;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.SetData(2, 3);
    c2.SetData(4, 5);
    c1.ShowData();
    c2.ShowData();
    c3 = c1.add(c2);
    cout << "+----+" << endl;
    c3.ShowData();

    return 0;
}