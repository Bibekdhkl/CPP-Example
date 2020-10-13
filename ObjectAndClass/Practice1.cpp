/*Design a class called Person that contains appropriate members for storing name, age, gender,
telephone number. Write member functions that can read and display these data.
*/
#include <iostream>

using namespace std;

class Person // class name always character
{
private:
     char name[20];
     int age;
     char gender[10];
     unsigned int telnum;

public:
     void read()
     {
          cout << "Enter your name:";
          cin >> name;
          cout << endl
               << "Enter your age:";
          cin >> age;
          cout << endl
               << "Enter your gender:";
          cin >> gender;
          cout << "Enter your telephone number :";
          cin >> telnum;
     }
     void display();
};

void Person ::display()
{
     cout << "--------------------" << endl;
     cout << "The  namme is: " << name;
     cout << endl
          << "Age is:" << age;
     cout << endl
          << "Gender is: " << gender;
     cout << endl
          << "Telephone number is: " << telnum;
     cout << endl
          << "------------------------";
}

int main()
{
     Person P;
     P.read();
     P.display();
}