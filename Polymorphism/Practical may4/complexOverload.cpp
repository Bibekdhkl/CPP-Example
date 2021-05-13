/* 3. Define a class Complex with data members real and img. Write a program to overload binary (+) operator to add two Complex numbers, binary minus (–) operator to subtract two Complex number and multiplication operator (*) to multiply two Complex numbers*/
#include<iostream>

using namespace std;

class Complex{
      int real,img;
      public:
            Complex(){}
            Complex(int a,int b){
                  real=a;
                  img=b;
            }
            void display(){
                  cout<<"\nThe real number is: "<<real<<" The imaginary number is: "<<img;
            }
            Complex operator + (Complex C){//one less argument as object for binary objects
                  Complex temp;
                  temp.real=real+C.real;
                  temp.img=img+C.img;
                  return temp;
            }
            friend Complex operator - (Complex,Complex);//for friend all the objects must be passed as argument
            friend void operator * (Complex&,Complex&);//since it take reference as argument so don't need to return object
};

Complex operator - (Complex C1,Complex C2){
      Complex temp;
      temp.real=C1.real-C2.real;
      temp.img=C1.img-C2.img;
      return temp;
}

void operator * (Complex &C1,Complex &C2){
      C1.real*=C2.real;
      C1.img*=C2.img;
}

int main(){
      Complex C1(4,5),C2(9,2),C3;
      C1.display();
      C2.display();
      C3=C1+C2;
      cout<<"\n\nAfter Addition";
      C3.display();
      C3=operator-(C1,C2);
      cout<<"\n\nAfter Subtraction";
      C3.display();
      operator*(C1,C2);
      cout<<"\n\nAfter Multiplication";
      C1.display();
      return 0;
}