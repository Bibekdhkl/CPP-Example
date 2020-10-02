//Program to use structure in C++

#include <iostream>

using namespace std;

struct Student{//the concept of structure is same as in C-Programming.
        char name[20];//array of characters is used here
        char address[20];
        struct DOB{//nesting of structure also you can use without nesting in next structure
            int day;
            int month;
            int year;
        }birth;
    };

int main()
{
   
    Student std;//giving variable name to the structure
    cout<<"Enter your name ";
    cin>>std.name;
    cout<<endl<<"Enter your address ";
    cin>>std.address;
    cout<<endl<<"Enter Date of birth in day, month and year";
    cin>>std.birth.day>>std.birth.month>>std.birth.year;
    cout<<"Name :"<<std.name<<endl;
    cout<<"Address :"<<std.address<<endl<<"DOB:"<<std.birth.day<<"/"<<std.birth.month<<"/"<<std.birth.year;
    
    return 0;
}
