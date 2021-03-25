#include<iostream>
#include<string.h>
#include<stdint.h>

using namespace std;

class Bank{
      char name[20];
      // char bank_number[20];
      unsigned int balance;
      char bank_number[20];
      public:
         
            Bank(){//default constructor
                  strcpy(name,"Anonymous");
                  balance=1000;
                  strcpy(bank_number,"100001");
            }
            Bank(char n[20],int bal,char bank[20]){//parameterized constructor
                  strcpy(name,n);
                  balance=bal;
                  strcpy(bank_number,bank);
            }
            Bank(Bank &cust){//copy constructor
                  strcpy(name,cust.name);
                  balance=cust.balance;
                  strcpy(bank_number,cust.bank_number);
            }

            void openAccount(){
                  cout<<"############################\n";
                  cout<<"You are about to start account Number:\n";
                  cout<<"Enter your new Account number ";
                  cin>>bank_number;
                  cout<<"Enter your name ";
                  cin>>name;
                  cout<<"Enter the amount you want to deposit";
                  cin>>balance;
                  cout<<"###########################\n";
            }
            void deposit(){
                  unsigned int depAmnt;
                  cout<<"Enter the amount you want to deposit\n";
                  cin>>depAmnt;
                  balance+=depAmnt;
                  cout<<"Your final balance is: "<< balance <<endl;
            }
            void withdraw(){
                  unsigned int withAmnt;
                  cout<<"Enter the amount you want to withdraw\n";
                  cin>>withAmnt;
                  if(balance>withAmnt){
                        balance-=withAmnt;
                        cout<<"(SUCCESS)Visit nearest bank booth for: "<<withAmnt<<"\n Y0ur final Balance is: "<<balance<<endl;
                  }
                  else 
                        cout<<"(PROCESS TERMINATED)Sorry, you don't have enough amount to withdraw!\n";
            }
            // void depWith(){
            //       int choice;
            //       cout<<"Do you want to deposit or withdraw(d/w)";
            //       cin>>choice;
            //       switch (choice)
            //       {
            //       case 'd':deposit();
            //             break;
            //       case 'w':withdraw();
            //             break;
            //       default:
            //             break;
            //       }
            // }

            void choiceMenu(char bank_number[20]){
                        if(strcmp(this->bank_number,bank_number)==0){
                              char choice;
                              cout<<"Do you want to deposit or withdraw(d/w)";
                              cin>>choice;
                              switch (choice)
                              {
                              case 'd':deposit();
                                    break;
                              case 'w':withdraw();
                                    break;
                              default:cout<<"(CHOICE ERROR)Your choice is ambigious";
                                    break;
                              }
                        }
                        else{
                              cout<<"(TERMINATED)You have entered a wrong Bank Number";
                        }

            }

            void userDetails();
};

void Bank :: userDetails(){
      cout<<"The name is: "<<name<<endl;
      cout<<"Bank number is: "<<bank_number<<endl;
      cout<<"Balance is: "<<balance<<endl;
}

int main(){
      system("CLS");
      Bank* cust=new Bank[10];
      // class Bank cust[0],cust[1]("Sila",2000,"100002");
      // class Bank cust[2](cust[0])
      char choice;
      int i;
      char bank_numb[20];
      cust[0];
      cust[1]=Bank("Sila",4000,"1000002");
      cust[2]=Bank(cust[1]);
      cust[3]=Bank("Saroj",5000,"1000003");
      cust[4]=Bank("Hari",6000,"1000004");
      // for(i=0,i<10,i++){
      //       cust[i]=Bank("Sangita",(i+1)*1000,"")
      // }
      while(1){
            cout<<"\n\n--------------------------------\n\n";
            cout<<"Enter your customer id from 0 to 9 ";
            cin>>i;
            cout<<"Welcome customer "<<i<<endl;
            cout<<"MENU:Enter \n o for Old customer\tn for new customer\tp to display user details\te to exit\n";
            cin>>choice;
            switch (choice)
            {
            case  'o':{ cout<<"\nEnter your Bank account number:";
                        cin>>bank_numb;
                        cust[i].choiceMenu(bank_numb);
                        }
                  break;
            case 'n':cust[i].openAccount();
                  break;
            case 'p':cust[i].userDetails();
                  break;
            case 'e':return 0;
                  break;
            default:cout<<"(CHOICE AMBIGUITY)Enter a valid choice\n";
                  break;
            }
            cout<<"\n$$$$$$$$$$$$$$$$$$Thank you for visiting$$$$$$$$$$$$$$$$$\n";
      }//while loop close
      delete[] cust;
}