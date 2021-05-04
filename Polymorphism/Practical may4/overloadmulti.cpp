#include<iostream>

using namespace std;

class Matrix{
      int matA[3][3];
      public:
            Matrix(){}
            void input(){
                  cout<<"Enter the elements of 3*3 matrix\n";
                  for(int i=0;i<3;i++){
                        for(int j=0;j<3;j++){
                              cin>>matA[i][j];
                        }
                  }
            }
            void display(){
                     for(int i=0;i<3;i++){
                        for(int j=0;j<3;j++){
                              cout<<matA[i][j]<<"\t";
                        }
                        cout<<"\n";       cout<<"\n";
                  }
            }
            void operator * (int m){
                     for(int i=0;i<3;i++){
                        for(int j=0;j<3;j++){
                              matA[i][j]*=m;
                        }
                  }
            }
};

int main(){
      Matrix obj;
      obj.input();
      cout<<"The entered matrix is: \n";
      obj.display();
      obj*9;//obj.operator*(9)
      cout<<"The matrix after multiplication is: \n";
      obj.display();
      return 0;
}