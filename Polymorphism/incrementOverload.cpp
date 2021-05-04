#include<iostream>

using namespace std;

class Distance{
      int km,m;
      public:
            Distance(){}
            Distance(int a,int b){
                  km=a;
                  m=b;
            }
            void display(){
                  cout<<"\nKilometer is: "<<km;
                  cout<<"\nMetre is: "<<m;
            }
            void operator ++(){
                  ++km;
                  ++m;
            }
            void operator ++(int){//to make compiler differentiate between pre and post we add arguments
                  km++;
                  m++;
            }
};

int main(){
      Distance obj(9,99);
      obj.display();
      ++obj;
      obj.display();
      obj.operator++(1);//compiler knows that the function with argument is post fix
      obj.display();    
      return 0;
}