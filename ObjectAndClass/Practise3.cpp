//distance from origin to the given coordinates using objects
#include <iostream>
#include <cmath>

using namespace std;

class Point
{
private:
    int x1, y1, z1;

public:
    void input(); //functon prototype/declaration
    void distance();
};

void Point :: input() //function definiton for the input
{
    cout << "--------------------------------" << endl;
    cout << " Enter Coordinates x1, y1 and z1: ";
    cin >> x1 >> y1 >> z1;
}

void Point ::distance()
{
    int sum = pow(x1, 2) + pow(y1, 2) + pow(z1, 2);
    float distance = sqrt(sum);
    cout << endl
         << "The distance between origin to the point is: " << distance;
    cout << endl
         << "##############################" << endl;
}

int main()
{
    Point c, c2;
    c.input();
    c.distance();
    c2.input();
    c2.distance();
}
