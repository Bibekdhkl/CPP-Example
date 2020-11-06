#include<iostream>

using namespace std;

class  Class2;
class Class3;
class Class4;
class Class1{
    int num1;
    public:
        void setValue(){
            cout << "Enter value of num1: ";
            cin >> num1;
        }
        friend void max(Class1 W,Class2 X,Class3 Y,Class4 Z);
};
class Class2{
    int num2;
    public:
        void setValue(){
            cout << "Enter value of num2: ";
            cin >> num2;
        }
        friend void max(Class1 W,Class2 X,Class3 Y,Class4 Z);
};
class Class3{
    int num3;
    public:
        void setValue(){
            cout << "Enter value of num3: ";
            cin >> num3;
        }
        friend void max(Class1 W,Class2 X,Class3 Y,Class4 Z);
};
class Class4{
    int num4;
    public:
        void setValue(){
            cout << "Enter value of num4: ";
            cin >> num4;
        }
        friend void max(Class1 W,Class2 X,Class3 Y,Class4 Z);
};

void max(Class1 W,Class2 X,Class3 Y,Class4 Z){
    int output = W.num1; //as of now , we will be outputting num1; , except if we find a lower score.
    if(output < X.num2) { output = X.num2;} // if output is proven to be bigger than num2, num2 is our new output.
    if(output < Y.num3){ output = Y.num3;} //same operation with num3
    if(output < Z.num4){ output = Z.num4;} // same operation with num4
    cout << "The maximum number is :" << output;
}

int main(){
    Class1 O1;
    Class2 O2;
    Class3 O3;
    Class4 O4;
    O1.setValue();
    O2.setValue();
    O3.setValue();
    O4.setValue();
    max(O1,O2,O3,O4);
    return 0;
}


