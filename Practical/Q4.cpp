#include <iostream>

using namespace std;

class Complex{
    int real, img;
    public:
        void input(){
            cout << "Enter real and imaginary number: ";
            cin >> real >> img;
        }
        friend void add(Complex Obj1,Complex Obj2);//
};

void add(Complex Obj1,Complex Obj2){
    Complex Obj;
    Obj.real = Obj1.real + Obj2.real;
    Obj.img = Obj1.img + Obj2.img;
    cout << "After Addition:";
    cout << "Sum of real:"<<Obj.real <<endl<<"Sum of Imaginary:"<<Obj.img;
}

int main(){
    Complex Obj1,Obj2;
    Obj1.input();
    Obj2.input();
    add(Obj1,Obj2);
    return 0;
}