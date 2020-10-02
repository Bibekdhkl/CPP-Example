#include <iostream>

using namespace std;

double volume(double r, int h)
{
    return (3.14 * r * r * h);
}

double volume(int r, int h)//Always be careful about the return type
{
    return ((1 / 3) * 3.14 * r * r * h);
}

int main()
{
    cout<< "Volume of cylinder is: "<<volume(2.5,4)<<endl;
    cout << "volume of cone is :" << volume(2,4);
    return 1;
}