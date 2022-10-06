// Define a class Bank and define member functions to read principal , rate of interest
// and year. Another member functions to calculate simple interest and display it.
// Initialise all details using constructor.
#include <iostream>
using namespace std;
class Bank
{
    int P, ROI, t;

public:
    Bank(int x, int w, int z)
    {
        P = x, ROI = w, t = z;
    }
    void SI_Display()
    {
        cout << "final amount is " << (P + (P * ROI * t) / 100) << endl;
    }
};
int main()
{
    int P, ROI, t;
    cout << "Enter principle amount: ";
    cin >> P;
    cout << "Enter ROI: ";
    cin >> ROI;
    cout << "Enter year: ";
    cin >> t;
    Bank b1(P, ROI, t);
    b1.SI_Display();
}