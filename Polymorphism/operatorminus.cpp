#include<iostream>

using namespace std;

class Complex{
      int real,img;
      public:
            Complex(){}
            Complex(int real,int b){
                  this->real=real;
                  img=b;
            }
            void display(){
                  cout<<"\nReal is: "<<real;
                  cout<<"\nImaginary is: "<<img;
            }
            Complex operator - (){
                  real= -real;
                  img = -img;
                  return *this;
            }
            friend void operator +(Complex &obj);
};

void operator + (Complex &C){
      C.real = -C.real;
      C.img = -C.img;
}

int main(){
      Complex complexTwo(10,20);
      complexTwo.display();
      Complex complexOne = -complexTwo;
      complexOne.display();
      operator + (complexOne);
      complexOne.display();
}