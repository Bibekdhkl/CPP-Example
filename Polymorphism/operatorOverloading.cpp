#include<iostream>

using namespace std;

class Complex{
      int real,img;
      public:
            Complex(){}
            Complex(int real, int b){
                  this->real=real;
                  img=b;
            }
            void display(){
                  cout<<"\nThe real part is : "<<real;
                  cout<<"\nThe imaginary part is: "<<img;
            }
            void operator - (){
                  real = - real;
                  img = - img;
            }
            Complex operator ++(){
                  ++real;
                  ++img;
                  return *this;
            }
            friend void operator +(Complex &C);

};

//If we want to change value in original object then we pass by value
void operator+(Complex &C){
      C.real= 5+C.real;
      C.img = 5+C.img;
}

int main(){
      Complex obj(10,20);
      obj.display();
      -obj;
      obj.display();
      Complex robj= ++obj;
      robj.display();
      operator +(obj);
      obj.display();
      return 0;
}