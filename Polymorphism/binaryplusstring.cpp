#include<iostream>
#include<string.h>

using namespace std;

class Strings
{
private:
      char str[20];
public:
      Strings(){}
      Strings(char str[]){
            strcpy(this->str,str);
      }
      Strings operator + (Strings name){
            strcat(str,name.str);
      }
      void display(){
            cout<<"\n\nString is: "<<str;
      }
      
};

int main(){
      Strings c1("Bibek"),c2("Dhakal");
      c1.display();
      c2.display();
      // c1+c2;
      c1.operator+(c2);
      c1.display();
      return 0;
}

