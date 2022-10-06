// Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.
#include <iostream>
#include <string.h>
using namespace std;
class Student
{
private:
    int ID, roll;
    char name[20];

public:
    Student()
    {
        cout << "Enter ID Number: ";
        cin >> ID;
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter your name: ";
        cin.ignore();
        fgets(name, 20, stdin);
    }
    void Display()
    {
        cout << "ID: " << ID;
        cout << "Roll: " << roll;
        cout << "Name: " << name;
    }
};
int main()
{
    Student s1;
    s1.Display();
    return 0;
}