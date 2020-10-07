/*Write a program to represent a Circle that has a member function to perform following tasks:
    Calculate area of circle
    Calculate perimeter of the cicle
 */
#include <iostream>

using namespace std;

class Circle
{
private:
    float radius;

public:
    void area()
    {
        cout << endl << "The area of circle is: " << (3.14 * radius * radius);
    }
    void perimeter()
    {
        cout << endl
             << "Perimeter of circle is :" << (2 * 3.14 * radius);
        cout << endl << "------------------------" <<endl;
    }

    void input()
    {
        cout << endl << "#######################" << endl;
        cout << endl << "Enter radius of circle ";
        cin >> radius;
    }
};

int main()
{
    Circle R,R2;
    R.input();
    R.area();
    R.perimeter();
    
    R2.input();
    R2.area();
    R2.perimeter();
}
