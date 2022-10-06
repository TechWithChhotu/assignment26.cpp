// Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)
#include <iostream>
using namespace std;
class Time
{
private: // optional becout all member of the class is by default private
    int h, m, s;

public:
    void SetTime(int x, int y, int z)
    {
        h = x, m = y, s = z;
        Normalize();
    }
    void ShowTime()
    {
        cout << "Time(HH:MM:SS):    " << h << ":" << m << ":" << s << endl;
    }
    void Normalize()
    {
        m += s / 60;
        s %= 60;
        h += m / 60;
        m %= 60;
        h %= 12;
    }
    Time add(Time t)
    {
        Time temp;
        temp.s = s + t.s;
        temp.h = h + t.h;
        temp.m = m + t.m;
        temp.Normalize();
        return temp;
    }
};
int main()
{
    Time t1, t2, t3;
    t1.SetTime(5, 35, 55);
    t2.SetTime(8, 45, 45);
    t3 = t1.add(t2);

    t1.ShowTime();
    t2.ShowTime();
    t3.ShowTime();
    return 0;
}
