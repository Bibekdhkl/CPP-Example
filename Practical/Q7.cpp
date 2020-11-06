#include <iostream>

using namespace std;

class First;//forwared Declaration
class Second{
    int num2;
    public:
        void input();
        void display();
        void swap(First &n);//member function of class Second
};
class First{
    int num1;
    public:
        void input();
        void display();
        friend void Second :: swap(First &n);//friend function of class Second
};

void First :: input(){
    cout << "Enter first number: ";
    cin >> num1;
}
void First :: display(){
    cout << endl << "The first number is: "<< num1;
}


void Second :: input(){
    cout << endl << "Enter Second number: ";
    cin >> num2;
}
void Second :: display(){
    cout << endl << "The Second number is: "<< num2;
}

void Second :: swap(First &n){
    int temp;
    temp = n.num1;
    n.num1 = num2;
    num2 = temp;
}

int main(){
    First n1;
    Second n2;
    n1.input();
    n2.input();
    cout << endl << "Before Swapping:";
    n1.display();
    n2.display();
    n2.swap(n1);
    cout << endl  << "After Swapping:";
    n1.display();
    n2.display();
    return 0;
}