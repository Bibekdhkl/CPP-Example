#include<iostream>

using namespace std;

#define pi 3.14 
//COMPILE TIME POLYMORPHISM USING FUNCTION OVERLOADING
class Volume{
      public:
            void calculateVolume(int l, int b,int h){
                  cout<<"\n The volume of rectangular box is: "<<l*b*h;
            }
            void calculateVolume(int r){
                  cout<<"\n The volume of sphere is: "<<((4.0/3)*pi*r*r*r);
            }
            void calculateVolume(double r,int h){
                  cout<<"\n The volume of cylinder is: "<<(pi *r*r*h);
            }
};

int main(){
      Volume obj;
      obj.calculateVolume(2,3,4);
      obj.calculateVolume(2);
      obj.calculateVolume(2.3,4);
      return 0;
}
