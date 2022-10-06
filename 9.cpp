// Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.
#include <iostream>
using namespace std;
class Bill
{
private:
    int unit;
    float Rs;

public:
    void get()
    {
        cout << "Enter Electric Bill(unit): ";
        cin >> unit;
    }
    void CalculateBill()
    {
        if (unit <= 100)
        {
            Rs = unit * 1.20;
            unit = 0;
        }
        else
        {
            unit -= 100;
            Rs = 100 * 1.20;
        }
        if (unit <= 100)
        {
            Rs += unit * 2;
            unit = 0;
        }
        else
        {
            unit -= 100;
            Rs += 100 * 2;
        }
        Rs += unit * 3;
        cout << "Total Bill: Rs. " << Rs << endl;
    }
};
int main()
{
    Bill a;
    a.get();
    a.CalculateBill();
    return 0;
}
