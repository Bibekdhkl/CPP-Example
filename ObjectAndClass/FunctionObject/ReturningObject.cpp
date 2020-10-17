/*  Using member function which returns Object by adding two objects*/
#include <iostream>

using namespace std;

class Distance
{
    float feet, inch;

public:
    void getDetails();
    void display(){
        cout << "The Sum of feet is : " << feet;
        cout << endl << "The sum of inch is :" << inch ;
    }
    Distance AddDist(Distance Obj);
};

void Distance :: getDetails(){
    cout << "Enter Feet and inch";
    cin >> feet >> inch;
}

Distance Distance :: AddDist(Distance Obj){
    Distance Obj2;//Obj2 returns data members for sum
    Obj2.feet = feet + Obj.feet;//Obj has data members  of D1
    Obj2.inch = inch + Obj.inch;//members variables without object has data members of D2
    return Obj2;
}

int main(){
    Distance D1,D2,sum;
    D1.getDetails();
    D2.getDetails();
    sum = D2.AddDist(D1);//sum keeps the data members returned
    sum.display();
    return 0;

}