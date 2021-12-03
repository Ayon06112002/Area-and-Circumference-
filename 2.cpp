// Menu driven program to calculate the area and circumference of a circle.
#include <iostream>
#include <cmath>
using namespace std;
const double pi = 3.147;

void area(double r)
{
    // cout<<"Enter circumference : ";
    double area;
    area = pi * pow(r, 2);
    cout << area << "m^2" << endl;  // calculating the area
}
void circumference(double r)
{
    // cout<<"Enter  : ";
    double circumference;
    circumference = 2 * pi * r; // calculating the circumference
    cout << circumference << "m" << endl;
}
int main()
{
    cout << "Enter radius of the circle : ";
    double r;
    cin >> r;
    bool t = true;

    while (t == true)
    {
        cout << "What do you want to calculate : " << endl;
        cout << "1. AREA " << endl;
        cout << "1. CIRCUMFERENCE " << endl;
        int choice;
        cout << "Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            area(r);
            break;
        case 2:
            circumference(r);
            break;
        default:
            cout << "Invalid choice" << endl;
        }
        cout << "Do you wish to continue (press n or N for termination: " << endl;
        char ch;
        cin >> ch;
        if (ch == 'n' || ch == 'N')
            t = false;
    }

    return 0;
}
