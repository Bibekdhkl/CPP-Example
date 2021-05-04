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
            Complex operator + (Complex plusObj){
                  Complex temp;
                  temp.real=real+plusObj.real;
                  temp.img=img+plusObj.img;
                  return temp;
            }
            friend Complex operator - (Complex,Complex);
            friend void operator * (Complex&,Complex&);
};

Complex operator - (Complex aobj,Complex bobj){
      Complex temp;
      temp.real=aobj.real-bobj.real;
      temp.img=aobj.img-bobj.img;
      return temp;
}

void operator * (Complex &obj,Complex &cobj){
      obj.real*=cobj.real;
      obj.img*=cobj.img;
}

int main(){
      Complex Aobj(4,5),Bobj(9,2),robj;
      Aobj.display();
      Bobj.display();
      robj=Aobj+Bobj;
      cout<<"\n\nAfter Addition";
      robj.display();
      robj=operator-(Aobj,Bobj);
      cout<<"\n\nAfter Subtraction";
      robj.display();
      operator*(Aobj,Bobj);
      cout<<"\n\nAfter Multiplication";
      Aobj.display();
      return 0;
}