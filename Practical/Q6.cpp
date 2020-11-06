#include <iostream>

using namespace std;

class Distance{
    int inch;
    float feet;
    public:
        void input(){
            cout << "Enter inch and feet: ";
            cin >> inch >> feet;
        }
        friend void add(Distance Obj,Distance Obj1);
};

void add(Distance Obj,Distance Obj1){
    Distance Obj2;
    Obj2.inch = Obj1.inch + Obj.inch;
    Obj2.feet = Obj1.feet + Obj.feet;
    cout << "After Addition:";
    cout << "Sum of inch:"<<Obj2.inch <<endl<<"Sum of feet:"<<Obj2.feet;
}

int main(){
    Distance Obj1,Obj2;
    Obj1.input();
    Obj2.input();
    add(Obj1,Obj2);
    return 0;
}