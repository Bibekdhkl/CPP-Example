#include<iostream>

using namespace std;

class Student{
    string name[100];
    static int count;
    public:
        int i=0;
        void setData();
        void display();
};

int Student :: count;

void Student :: setData(){
    i++;
    cout << "Enter name of students: ";
    cin >> name[i];
    count ++;
}
void Student :: display(){
    cout << "The number of students are: " << count << endl;
    for(i=0;i<count;i++){
        cout<<"The name of student is:  "<< name[i] <<endl;
    }
}

int main(){
    char data;
    Student obj;
    do{
        obj.setData();
        cout << "Do you want to add more?(y/n) ";
        cin >> data;
    }while(data != 'n');
    obj.display();
    return 0;
}