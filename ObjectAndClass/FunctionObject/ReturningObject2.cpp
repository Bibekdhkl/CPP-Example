/*  Calling Object from a member function  */
#include <iostream>

using namespace std;

class time
{
    int hours,minutes,second;

public:
    void getDetails();
    void display()
    {
        cout << "The Sum of hours is: " << hours;
        cout << endl
             << "The sum of minutes is :" << minutes;
        cout << endl
             << "The sum of seconds is :" << second;
    }
    time AddTime(time T1);
};

void time ::getDetails()
{
    cout << "Enter hours,minutes and seconds of time : ";
    cin >> hours >> minutes >> second;
}

time time ::AddTime(time T1)
{   
    time T2;
    //finding seconds
    T2.second = second + T1.second;
    T2.minutes = T2.second / 60;
    T2.second = T2.second % 60;
    //finding minutes
    T2.minutes = T2.minutes + minutes + T1.minutes;
    T2.hours = T2.minutes % 60;
    T2.minutes = T2.minutes / 60;
    //finding hours 
    T2.hours = hours + T1.hours + T2.hours;
    return T2;
}

int main()
{
    time Time1, Time2, Add;
    Time1.getDetails();
    Time2.getDetails();
    Add=Time2.AddTime(Time1);
    Add.display();
    return 0;
}