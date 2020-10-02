#include <iostream>

using namespace std;

void interest(int p, int t, float r = 1.5);

int main()
{
    int p, t;
    float r;
    cout << "Enter Principal,time and rate";
    cin >> p >> t >> r;
    interest(p, t);
    interest(p, t, r);
    return 0;
}

void interest(int p, int t, float r)
{
    float SI;
    SI = (p * t * r) / 100;
    cout << "The Simple interest is:" << SI;
}