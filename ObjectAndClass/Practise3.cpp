#include <iostream>
#include <cmath>

using namespace std;

class Point
{
private:
    int x1,y1,z1;
    int x2,y2,z2;

public:
    void input(); //functon prototype
    void distance();
};

void Point ::input()//function definiton for the input
{ 
    cout << "----------------" << endl;
    cout << " Enter Coordinates x1, y1 and z1: ";
    cin >> x1 >> y1 >> z1;
    cout << endl << " Enter Coordinates x2, y2 and z2: ";
    cin >> x2 >> y2 >> z2;
}

void Point :: distance()
{
    int X = x1 - x2;
    int Y = y1 - y2;
    int Z = z1 - z2;
    int sum= pow(X,2)+pow(Y,2)+pow(Z,2);
    float distance = sqrt(sum);
    cout << endl << "The distance between two point  is: " << distance;
    cout << endl <<"##############################";
}

int main()
{
    Point c;
    c.input();
    c.distance();

}
