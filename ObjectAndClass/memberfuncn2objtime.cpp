/*  Using member function which accepts two Objects */
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
    void AddTime(time F, time I);
};

void time ::getDetails()
{
    cout << "Enter hours,minutes and seconds of time : ";
    cin >> hours >> minutes >> second;
}

void time ::AddTime(time Obj1, time Obj2)
{
    //finding seconds
    second = Obj1.second + Obj2.second;
    minutes = second / 60;
    second = second % 60;
    //finding minutes
    minutes = minutes + Obj1.minutes + Obj2.minutes;
    hours = minutes % 60;
    minutes = minutes / 60;
    //finding hours 
    hours = hours + Obj1.hours + Obj2.hours;
}

int main()
{
    time Time1, Time2, Add;
    Time1.getDetails();
    Time2.getDetails();
    Add.AddTime(Time1, Time2);
    Add.display();
    return 0;
}