/* 1. Define a class Distance with data member kilometer and meter. Add 5 to the distance object by overloading binary plus operator. */
#include<iostream>

using namespace std;

class Distance{
      int km,m;
      public:
            Distance(){}
            Distance(int a,int b){km=a;m=b;}
            void operator +(int a){//not unary
                  km+=a;
                  m+=a;
            }
            void display(){
                  cout<<"\nKm="<<km<<"\nMetre="<<m;
            }
};

int main(){
      Distance obj(5,6);
      obj.display();
      obj+5;//obj.operator+(5)
      obj.display();
      return 0;
}