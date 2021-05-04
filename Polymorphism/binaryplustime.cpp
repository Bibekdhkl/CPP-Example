#include<iostream>

using namespace std;

class Time{
      int hours,min,sec;
      public:
            Time(){}
            Time (int hours,int min,int sec){
                  this->hours=hours;
                  this->min=min;
                  this->sec=sec;
            }
            // Time operator + (Time T1){
            //       Time temp;
            //       temp.sec=sec+T1.sec;
            //       temp.min=temp.sec/60;
            //       temp.sec%=60;
            //       temp.min+=min+T1.min;
            //       temp.hours=temp.min/60;
            //       temp.min%=60;
            //       temp.hours+=hours+T1.hours;
            //       return temp;
            // }
            friend Time operator + (Time T1,Time T2);
            void display(){
                  cout<<"\n\nHours is: "<<hours;
                  cout<<"\nMinute is: "<<min;
                  cout<<"\nSecond is: "<<sec;
            }
};
Time operator + (Time T1,Time T2 ){
                  Time temp;
                  temp.sec=T2.sec+T1.sec;
                  temp.min=temp.sec/60;
                  temp.sec%=60;
                  temp.min+=T2.min+T1.min;
                  temp.hours=temp.min/60;
                  temp.min%=60;
                  temp.hours+=T2.hours+T1.hours;
                  return temp;
            }

int main(){
      Time t1(2,40,50),t2(10,50,15),t3;
      t1.display();
      t2.display();
      // t3=t1+t2;
      //t3=t1.operator+(t2);
      t3=operator+(t1,t2);
      t3.display();
      return 0;
}