#include<iostream>

using namespace std;

class Rectangle{
    int length, breadth;
    public:
        void input();
        void calculate_area();
        void display(int Area);
};

void Rectangle :: input(){
    cout << "Enter length and breadth of rectanngle";
    cin >> length >> breadth;
}

void Rectangle :: calculate_area(){
    int area = (length*breadth);
    display(area);
}

void Rectangle :: display(int Area){
    cout << "The area is: " << Area;
}

int main(){
    Rectangle Obj;
    Obj.input();
    Obj.calculate_area();
    return 0;
}