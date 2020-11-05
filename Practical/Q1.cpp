#include <iostream>

using namespace std;

class Rational{
    public:
        int num,den;
        void input();
        friend void compare_num_den(Rational N);
        friend void multiply(Rational &N,Rational M);//N object is as reference
};

void Rational :: input(){
    cout << endl << "Enter numerator:";
    cin >> num;
    cout << "Enter denominator";
    cin >> den;
}

void compare_num_den(Rational N){
    cout << endl << "Comparing num and den of x";
    if(N.num>N.den)
        cout << endl << "The minimum value is: " << N.den;
    else
       cout << endl << "The minimum value is: " << N.num; 
}

void multiply(Rational &N, Rational M){
    N.num = N.num * M.num;
    N.den = N.den * M.den;
    
    /*cout << endl << endl << "After Multiplication:";
    cout << "Numerator is :" << N.num;
    cout << "Denominator is: " << N.den;*/
}



int main(){
    Rational x,y;
    cout << endl<<"num den for x";
    x.input();
    cout << endl << "num den for y";
    y.input();
    compare_num_den(x);
    multiply(x,y);
    cout << endl << endl << "After Multiplication:";
    cout << "Numerator is :" << x.num;
    cout << "Denominator is: " << x.den;
    //cout << endl<< "num and den are :" << x.num << " and" << x.den;either making num den public
    return 0;//or using constructor
}

/* Using paramaterized constructor
#include <iostream>

using namespace std;

class Rational{
    private:
        int num;
        int den;
    public:
        Rational(int x, int y){
            num=x;
            den=y;
        }
        int get_num(){return num;}
        int get_den(){return den;}
        int compare_num_den();
        Rational multiply(Rational N,Rational M);
};


int Rational::compare_num_den(){
    return (num<den)?num:den;
}

Rational Rational::multiply(Rational N, Rational M){
    Rational temp(0,0);
    temp.num = N.num * M.num;
    temp.den = N.den * M.den;
    return temp;
}



int main(){
    Rational x(4,5);
    cout << x.compare_num_den() << endl;
    Rational y(3,4);
    Rational m = x.multiply(x,y);
    cout << endl << "After Multiplication:";
    cout << endl << "num and den are :" << m.get_num() << " and" << m.get_den();
    cout << endl << x.get_num() << "  " << x.get_den();
    return 0;
} */

/*
#include <iostream>

using namespace std;

class Rational{
    
    public:
        int num,den;
        Rational(int x, int y){num=x;den=y;}
        int get_num(){return num;}
        int get_den(){return den;}
        int compare_num_den();
        int minm(Rational N);
        Rational multiply(Rational N,Rational M);
};

int Rational::minm(Rational N){
    return (N.num<N.den)?N.num:N.den;
}

Rational Rational::multiply(Rational N, Rational M){
    Rational temp(0,0);
    temp.num = N.num * M.num;
    temp.den = N.den * M.den;
    return temp;
}



int main(){
    Rational x(4,5);
    cout << x.compare_num_den() <<endl;
    Rational y(3,4);
    Rational m = x.multiply(x,y);
    cout << endl << "After Multiplication:";
    cout << endl<< "num and den are :" << m.num << " and"<< m.den;
    cout << endl << x.get_num() << "  " << x.get_den();
    return 0;
}
*/