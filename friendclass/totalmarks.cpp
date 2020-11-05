#include <iostream>

using namespace std;

class Marks;
class Practical{
    int phymark;
    int chemark;
    public:
        void input();
        void display();
        friend class Marks;//friend class
};
class Theory{
    int phymark;
    int chemark;
    public:
        void input();
        void display();
        friend class Marks;//friend class
};
class Marks{
    public:
        void totalMarks(Practical P, Theory T);
};

void Theory :: input(){
    cout << "Enter Theory marks of physics and chemistry:";
    cin >> phymark >> chemark;
}

void Theory :: display(){
    cout << endl << endl<< "Theory marks of physics is:" << phymark;
    cout << endl << "Theory marks of Chemistry is:" << chemark;
}
void Practical :: input(){
    cout << endl << "Enter Practical marks of physics and chemistry:";
    cin >> phymark >> chemark;
}

void Practical :: display(){
    cout << endl << endl<< "Practical marks of Physics is :" << phymark;
    cout << endl << "Practical marks of Chemistry is :" << chemark;
}
void Marks :: totalMarks(Practical P, Theory T){
    int physics = P.phymark + T.phymark;
    int chemistry = P.chemark + T.chemark;
    int total = physics + chemistry;
    cout << endl << endl<< "Total marks of physics is:" << physics;
    cout << endl << "Total marks of chemistry is:" << chemistry;
    cout << endl << "Total marks of all subjects is:" << total;
}

int main(){
    Practical Obj1;
    Theory Obj2;
    Marks Obj;
    Obj1.input();
    Obj2.input();
    Obj1.display();
    Obj2.display();
    Obj.totalMarks(Obj1,Obj2);
    return 0;
}