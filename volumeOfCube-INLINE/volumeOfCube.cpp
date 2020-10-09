#include <iostream>
#include <conio.h>

using namespace std;

inline int volume(int a)//Use of Inline function
{
    return(a*a*a);
}

int main()
{
    int n,result;
    cout<<"Enter side of cube: ";
    cin >> n;
    result = volume(n);
    cout << "The volumes of cube is :"<<result;
    return 0;
}
