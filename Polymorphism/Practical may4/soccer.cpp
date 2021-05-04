#include<iostream>

using namespace std;

class Soccer{
      int player_jersey,no_of_goals,num_of_assist;
      public:
            Soccer(){}
            Soccer(int a,int b,int c){
                  player_jersey=a;
                  no_of_goals=b;
                  num_of_assist=c;
            }
            void input(){
                  cout<<"Enter Jersey Number = ";
                  cin>>player_jersey;
                  cout<<"Enter number of goals = ";
                  cin>>no_of_goals;
                  cout<<"Enter number of assists = ";
                  cin>>num_of_assist;
            }
            Soccer operator > (Soccer s[]){
                  Soccer max =s[0];
                  for(int i=0;i<10;i++){
                        if((max.no_of_goals+max.num_of_assist)<(s[i+1].no_of_goals+s[i+1].num_of_assist)){
                              max=s[i+1];
                        }
                  }
                  return max;
            }
            void display(){
                  cout<<"\nJersey No: "<<player_jersey<<" No of goals: "<<no_of_goals<<" No of assist: "<<num_of_assist;
            }
};

int main(){
      Soccer obj[11],robj;
      int i;
      //Soccer obj[3]={Soccer(1,2,3),Soccer(2,0,2),Soccer(3,2,0)};
      // obj[0](1,2,3);
      // obj[1](2,0,2);
      // obj[2](3,2,0);
      cout<<"Enter details of players\n";
      for(i=0;i<11;i++){
            obj[i].input();
            cout<<"-----------------\n";
      }
      for(i=0;i<11;i++){
            cout<<"\n###################\n";
            obj[i].display();
      }
      robj=robj>obj;//robj.operator>(obj);
      cout<<"\nThe player with maximum assist+goals is:";
      robj.display();
      return 0;
}