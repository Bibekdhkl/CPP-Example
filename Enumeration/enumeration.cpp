//Question:Program to define enumerator month with name of 12 months
//And to display integer value assigned to the months
#include <iostream>

using namespace std;

int main()
{
    enum Month//enum can be declared outside of the main function too
    {
        jan = 1,
        feb,
        march,
        april,
        may = 8,
        june,
        july,
        aug,
        sep,
        oct,
        nov,
        dec
    };

    Month first, second, Third;
    first = jan;
    second = july;
    Third = dec;
    cout << "jan = " << first << " july = " << second << " december = " << Third;
    //Isn't it cool? :-)
}
