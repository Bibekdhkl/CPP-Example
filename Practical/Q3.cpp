#include <iostream>

using namespace std;

class Complex{
    int real, img;
    public:
        void input(){
            cout << "Enter real and imaginary number: ";
            cin >> real >> img;
        }
        void add(Complex Obj);
};

void Complex :: add(Complex Obj){
    Complex Obj2;
    Obj2.real = real + Obj.real;
    Obj2.img = img + Obj.img;
    cout << "After Addition:";
    cout << "Sum of real:"<<Obj2.real <<endl<<"Sum of Imaginary:"<<Obj2.img;
}

int main(){
    Complex Obj1,Obj2;
    Obj1.input();
    Obj2.input();
    Obj2.add(Obj1);
    return 0;
}