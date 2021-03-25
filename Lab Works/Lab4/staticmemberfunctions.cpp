/*WAP to count cars and bikes passed and also the total number of vehicles using static member functions*/
#include<iostream>

using namespace std;

class Vehicle{
      int car=0,bike=0;//Non-Static Data members can't be accessed by Static Member Functions
      static int total_vehicle;
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
            static void display_vehicle(){//it doesn't need definition outside class
                  cout<<"\nTotal vehicles passed are: "<<total_vehicle;
                  // cout<<"Printing member vehicles car: "<<car;-It gives error if uncommented
            }
};

int Vehicle::total_vehicle;
int main(){
      Vehicle Obj1,Obj2;
      Obj1.bike_passed();
      Vehicle::display_vehicle();
      Obj2.bike_passed();
      Vehicle::display_vehicle();
      Obj1.car_passed();
      Vehicle::display_vehicle();
      Obj2.car_passed();
      Vehicle::display_vehicle();
      cout<<"\nDetails of Obj1\n";
      Obj1.display();
      cout<<"\nDetails of Obj2\n";
      Obj2.display();
      return 0;
}