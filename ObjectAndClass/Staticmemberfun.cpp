
#include <iostream>

using namespace std;

class Student
{
private:
    char name[20];
    static int count;

public:
    void getDetails();
    void display();
    static void funcount();
};

void Student ::getDetails()
{
    cout << "Enter name of Student:";
    cin >> name;
    count++;
}
int Student :: count;// static member function definiton
void Student :: funcount()// static function declaration
{
    cout<< "The number of student is: " << count<<endl;
}

void Student ::display()
{
    cout << " The name of Student is: " << name<<endl;
}

int main()
{
    Student S1, S2, S3;
    S1.getDetails();
    Student :: funcount();//static function call
    S1.display();
    S2.getDetails();
    Student :: funcount();
    S2.display();
    S3.getDetails();
    S3.display();
    Student :: funcount();
    return 0;
}