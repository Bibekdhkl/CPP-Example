#include<iostream>
#include<string.h>

using namespace std;

class String{
      char str[20];
      public:
            void input(){
                  cout<<"\nEnter a string: ";
                  cin>>str;
            }
            void display(){
                  cout<<"The entered string is: "<<str;
            }
            // void operator == (String s){
            //      if(strcmp(str,s.str)){
            //            cout<<"\nThe string are not equal";
            //      }
            //      else{
            //            cout<<"\nThe strings are identical.";
            //      }
            // }
            friend void operator == (String,String);
};

void operator == (String s,String t){
                  if(strcmp(s.str,t.str)){
                       cout<<"\nThe string are not equal";
                 }
                 else{
                       cout<<"\nThe strings are identical.";
                 }
}

int main(){
      String obj1,obj2;
      obj1.input();
      obj1.display();
      obj2.input();
      obj2.display();
      obj1==obj2;
      // operator==(obj1,obj2);
      return 0;
}