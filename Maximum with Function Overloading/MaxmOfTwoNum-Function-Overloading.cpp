#include <iostream>

using namespace std;

int maximum(int a, int b)
{
    return ((a > b) ? a : b); //Used conditional ternary operator here
}

int maximum(int a, int b, int c)
{
    if ((a > b) && (a > c))
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c;
    cout << "Enter 3 numbers";
    cin >> a >> b >> c;
    cout << "Maxm of 2 number is:" << maximum(a, b) << endl;
    cout << "Maxm of 3 number is:" << maximum(a, b, c);
    return 0;
}