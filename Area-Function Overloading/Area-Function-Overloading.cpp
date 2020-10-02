/*
Q.Finding area of cube cylinder and rectangle by using function overloading technique?

Simply, Function overloading means functions having same name but does different task;
As per the type and sequence of arguments.

*/

#include <iostream>

using namespace std;

#define pi 3.14 //semicolon isn't used in defining macro

int area(int l)
{
    return (6 * l);
}

double area(double r, int h)
{
    return (pi * r * r * h);
}

int area(int l, int b)
{
    return (l + b);
}

int main()
{
    cout << "Area of cube is:" << area(2) << endl;
    cout << "Area of cylinder is:" << area(3.2, 4) << endl; //
    cout << "Area of rectangel is:" << area(3, 4);
    return 0;
}

// Program automatically picks the right function based on input arguments