#include <iostream>

using namespace std;

inline int Multi(int a, int b)
{
    return(a*b);
}

inline float Divi(int a, int b)
{
    return((float)a/b);
}

int main()
{
    int x,y,MUL;
    float DIV;//has precision 6
    cout << "Enter two number's: ";
    cin >> x >> y;
    MUL = Multi(x,y);
    DIV = Divi(x,y);
    cout << "Multiplication is: " << MUL <<endl << "Division is:" << DIV;
    return 0;
}
