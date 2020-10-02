
//example for call by reference
#include <iostream>

using namespace std;

void computeSphere(float &V, float &s, float &r){
    V=((4/3)*3.14*r*r*r);
    s=(4*3.14*r*r);
}

int main()
{
    float radius,volume,surface;
    cout<<"Enter radius of sphere";
    cin>>radius;
    computeSphere(volume,surface,radius);
    cout<<"Volume is:"<<volume<<endl;
    cout<<"Surface Area is:"<<surface;
    

    return 0;
}