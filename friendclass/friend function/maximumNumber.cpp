#include <iostream>

using namespace std;

class Class2;
class Class1{
    int num1;
    public:
        void setValue();
        friend void max(Class1 N1,Class2 N2);//friend function
};

class Class2{
    int num2;
    public:
        void setValue();
        friend void max(Class1 N1,Class2 N2);//friend function
};

void Class1 :: setValue(){
    cout << "Enter the number of Class1:";
    cin >> num1;
}
void Class2 :: setValue(){
    cout << endl<< "Enter the number of Class2:";
    cin >> num2;
}
void max(Class1 N1,Class2 N2){
    if(N1.num1>N2.num2)
        cout << endl << N1.num1 << " is maximum of Class1";
    else
        cout << endl << N2.num2 << " is maximum of Class2";
}

int main(){
    Class1 obj1;
    Class2 obj2;
    obj1.setValue();
    obj2.setValue();
    max(obj1,obj2);
    return 0;
}