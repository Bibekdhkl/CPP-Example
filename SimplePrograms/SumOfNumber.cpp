//Program to add two numbers
#include <iostream>

using namespace std;// container where identifier like cin and cout are defined

int main()
{
 int x,y,ADD;
 cout<<"Enter two numbers";
 cin>>x>>y;//Also we can write like this :cin>>x cin>>y
 ADD=x+y;
 cout<<"The sum of "<<x<<" and "<<y<<" is"<<endl<<ADD;//endl breaks line
 return 0;
}
