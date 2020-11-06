#include <iostream>

using namespace std;

class Mountain{
    string name;
    int height;
    string location;
    public:
        void input();
        friend void cmpHeight(Mountain Obj1,Mountain Obj2);
        void displayInfo();
};

void Mountain :: input(){
    cout <<endl<<"Enter the name of mountain:";
    cin >> name;
    cout << "Enter the height of mountain:";
    cin >> height;
    cout<< "Enter the location of mountain: ";
    cin >> location;
}

void cmpHeight(Mountain Obj1, Mountain Obj2){
    if(Obj1.height>Obj2.height)
        Obj1.displayInfo();
    else 
        Obj2.displayInfo();
}

void Mountain :: displayInfo(){
    cout << endl << "The name of greatest mountain is:" << name;
    cout << endl << "The height of greatest mountain is :" << height;
    cout << endl << "The location of greatest mountain is: "<< location;
}

int main(){
    Mountain O1,O2;
    O1.input();
    O2.input();
    cmpHeight(O1,O2);
    return 0;
}

