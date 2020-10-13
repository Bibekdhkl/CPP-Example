#include <iostream>
#include <conio.h>

using namespace std;

inline int square(int n)//inline function
{
    return(n*n);
}

int main()
{
    int a,ans;
    cout << "Enter a number";
    cin >> a;
    ans = square(a);//execution time is increased while line of codes is decreased
    cout << "The square of a number is: "<< ans;
    return 0;
}
