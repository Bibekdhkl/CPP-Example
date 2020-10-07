#include <iostream>

using namespace std;

class Student
{
private:
    char name[20];
    int marks;

public:
    void getDetails()
    {
        cout << "Enter your name" << endl;
        cin >> name;
        cout << endl<< "Enter your marks";
        cin >> marks;
    }
    void display();
};

void Student :: display()
{
    cout << "Your name is:" << name;
    cout << "Your marks is:"<<marks;
}

int main()
{
    Student s1;
    s1.getDetails();
    s1.display();
}
