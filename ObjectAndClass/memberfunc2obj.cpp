/*  Using member function which accepts two Objects */
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
    void AddDist(Distance F,Distance I);
};

void Distance :: getDetails(){
    cout << "Enter Feet and inch";
    cin >> feet >> inch;
}

void Distance :: AddDist(Distance F, Distance I){
    feet = F.feet + I.feet;
    inch = F.inch + I.inch;
}

int main(){
    Distance D1,D2,sum;
    D1.getDetails();
    D2.getDetails();
    sum.AddDist(D1,D2);
    sum.display();
    return 0;

}