/*WAP to count cars and bikes passed and also the total number of vehicles using static data members*/
#include<iostream>

using namespace std;

class Vehicle{
      int car=0,bike=0;
      static int total_vehicle;//declaration inside the class
      /*only one copy of the variable is made by entire class and shared by all the objects,no matter how many objects are created but it use a single copy of static data members. This type of varible is also called class variable.It can be used within the class but its lifetime is the whole program*/
      public:
            void car_passed(){
                  car++;
                  total_vehicle++;
            }
            void bike_passed(){
                  bike++;
                  total_vehicle++;
            }
            void display(){
                  cout<<"Total bikes passed are: "<<bike<<"\nToal cars passed are: "<<car;
                  cout<<"\n Total vehicles are: "<<total_vehicle;
            }
};

int Vehicle::total_vehicle;// Definition Outside the class-default value is 0
int main(){
      Vehicle Obj1,Obj2;
      Obj1.bike_passed();
      Obj2.bike_passed();
      Obj1.car_passed();
      Obj2.car_passed();
      //each time the member functions are called the static data members is updated
      cout<<"Details of Obj1\n";
      Obj1.display();
      cout<<"\nDetails of Obj2\n";
      Obj2.display();
      return 0;
}