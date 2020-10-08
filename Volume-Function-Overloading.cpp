#include <iostream>

using namespace std;

double volume(double r, int h)
{
    return (3.14 * r * r * h);
}

float volume(int r, float h)//we must be conscious about return type
{
    return ((1 / 3) * 3.14 * r * r * h);
}

int volume(int l, int b){
    return(l * b);
}

int main()
{
    cout<< "Volume of cylinder is: "<<volume(2.5, 4)<<endl;
    cout << "Volume of cone is :" << volume(2.2, 4.2)<<endl;
    cout <<"Volume of rectangular box is: " << volume(2, 3);
    return 1;
}