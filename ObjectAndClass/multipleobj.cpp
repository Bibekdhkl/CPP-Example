#include <iostream>

using namespace std;

class Person
{
private:
    char name[20], gender[10], telnum[20];
    int age;

public:
    void read();
    void display();
};

void Person ::read()
{
    cout << "Enter your name ";
    cin >> name;
    cout << "Enter your gender: ";
    cin >> gender;
    cout << "Enter your telephone number: ";
    cin >> telnum;
    cout << "Enter your age ";
    cin >> age;
}

void Person ::display()
{
    cout << "The name of person is:" << name << endl;
    cout << "The gender is " << gender << endl
         << "THe telephone number is: " << telnum << endl
         << "The age is :" << age << endl;
}

int main()
{
    Person P1, P2;
    P1.read();
    P2.read();
    P1.display();
    P2.display();
    return 0;
}
