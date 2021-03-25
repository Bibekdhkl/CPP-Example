#include<iostream>

using namespace std;

class TollBooth{
      unsigned int no_of_car;
      double cash_total;
      public:
            TollBooth(){
                  no_of_car=0;
                  cash_total=0;
            }
            void payingCar(){
                  no_of_car++;
                  cash_total+=5;
            }
            void noPayCar(){
                  no_of_car++;
            }
            void display(){
                  cout<<"The total car passed are: "<<no_of_car;
                  cout<<"\nThe total amount collected is: "<<cash_total;
            }
            void menu(){
                  cout<<"\nPaying Car= 'p'\fNon-Paying-car = 'n'\f Display totals ='d'\f Exit = 'e'\n";
            }
};

int main(){
      TollBooth obj;
      char choice;
      while(1){
      cout<<"\n######################################################\n";
      obj.menu();
      cout<<"Enter your choice\t";
      cin>>choice;
      switch (choice)
      {
      case 'p':obj.payingCar();
            break;
      case 'n':obj.noPayCar();
            break;
      case 'd':obj.display();
            break;
      case 'e':exit(0);
      default:cout<<"Enter the valid choice";
            break;
      }
      }
}