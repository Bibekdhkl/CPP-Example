/*Program to  get details about employee using array of objects*/
#include <iostream>

using namespace std;

class Employee //class must always begin with samll letter
{
private:
    char name[20];
    int salary, id_number;

public:
    void getDetails();
    void display();
};

void Employee ::getDetails()
{
    cout << "Enter name of employee:";
    cin >> name;
    cout << endl
         << "Enter salary and id number";
    cin >> salary >> id_number;
}

void Employee ::display()
{
    cout << " The name of employee is: " << name;
    cout << endl
         << "Salary is:" << salary;
    cout << endl
         << "Id number is: " << id_number;
}

int main()
{
    Employee S[10];
    int i, n;
    cout << "Enter total number of employees: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        S[i].getDetails();
    }
    cout << "--------------------------";
    for (i = 0; i < n; i++)
    {
        S[i].display();
    }
    return 1;
}