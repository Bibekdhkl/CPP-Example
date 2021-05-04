#include<iostream>

using namespace std;

class Currency{
      int Rs,paisa;
      public:
            Currency(){}
            Currency(int a,int b){
                  Rs=a;
                  paisa=b;
            }
            void operator ++(){
                  Rs+=1;
                  paisa+=1;
            }
            void operator --(){
                  Rs-=1;
                  paisa-=1;
            }
            void display(){
                  cout<<"\nRupees is: "<<Rs<<"\nPaisa is: "<<paisa;
            }
};

int main(){
      Currency obj(50,60),bobj(45,55);
      obj.display();
      ++obj;//obj.operator++();
      obj.display();
      cout<<"\n\n";
      bobj.display();
      --bobj;
      bobj.display();
      return 0;
}