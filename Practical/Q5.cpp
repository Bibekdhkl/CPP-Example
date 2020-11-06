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
        void add(Distance Obj);
};

void Distance :: add(Distance Obj){
    Distance Obj2;
    Obj2.inch = inch + Obj.inch;
    Obj2.feet = feet + Obj.feet;
    cout << "After Addition:";
    cout << "Sum of inch:"<<Obj2.inch <<endl<<"Sum of feet:"<<Obj2.feet;
}

int main(){
    Distance Obj1,Obj2;
    Obj1.input();
    Obj2.input();
    Obj2.add(Obj1);
    return 0;
}