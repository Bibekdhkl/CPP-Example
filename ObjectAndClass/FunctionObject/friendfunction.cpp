/*  Using member function which accepts two Objects */
#include <iostream>

using namespace std;

class Time
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
    friend void addTime(Time F, Time I);
};

void Time ::getDetails()
{
    cout << "Enter hours,minutes and seconds of Time : ";
    cin >> hours >> minutes >> second;
}

void addTime(Time Obj1, Time Obj2)
{
    Time obj3;
    //finding seconds
    obj3.second = Obj1.second + Obj2.second;
    obj3.minutes = obj3.second / 60;
    obj3.second = obj3.second % 60;
    //finding minutes
    obj3.minutes = obj3.minutes + Obj1.minutes + Obj2.minutes;
    obj3.hours = obj3.minutes / 60;
    obj3.minutes = obj3.minutes % 60;
    //finding hours 
    obj3.hours = obj3.hours + Obj1.hours + Obj2.hours;
    obj3.display();

}

int main()
{
    Time Time1, Time2;
    Time1.getDetails();
    Time2.getDetails();
    addTime(Time1, Time2);
    return 0;
}