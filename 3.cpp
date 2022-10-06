// // 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include <iostream>
using namespace std;
class Cube
{
private:
    double a;

public:
    Cube(double x)
    {
        a = x;
    }

    double volume()
    {
        return a * a * a;
    }
    ~Cube()
    {
        cout << "Distructing: " << a;
    }
};
int main()
{
    Cube a(5.4);
    cout << "Cube of volume is " << a.volume() << endl;
    return 0;
}
