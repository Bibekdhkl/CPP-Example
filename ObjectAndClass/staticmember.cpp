/*Using Static Data Member */
#include <iostream>

using namespace std;

class Student //class must always begin with samll letter
{
private:
    char name[20];
    int roll, marks;
    int Stdnum;
    static int count; //static data member declaration

public:
    void getDetails();
    void display();
    void count();
};

void Student ::getDetails()
{
    cout << "Enter name of Student:";
    cin >> name;
    cout << endl
         << "Enter roll number and marks";
    cin >> roll >> marks;
}

void Student ::count
{
    count = count + 1;
}

void Student ::display()
{
    cout << "The information of" << count << " number student is: " << endl;
    cout << " The name of Student is: " << name;
    cout << endl
         << "Roll number is:" << roll;
    cout << endl
         << "Marks is: " << marks;
}

int main()
{
    Student S1, S2, S3;
    S1.getDetails();
    S1.display();
    S2.getDetails();
    S2.display();
    S3.getDetails();
    S3.display();
    return 0;
}