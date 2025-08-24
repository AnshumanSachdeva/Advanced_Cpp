#include<iostream>
using namespace std;
class arithmetic{
    protected:
    int a,b,sum,sub,mul,div;
    public:
    void values(int x, int y){
        a = x; 
        b = y;
    }
    virtual int operation(){
        sum = a+b;
        cout << "Sum is: " << sum << endl;;
    }
};
class substarct:public arithmetic{
    public:
    int operation(){
        sub = a-b;
        cout <<"Substract is: " << sub << endl;
    }
};
class multiply:public arithmetic{
    public:
    int operation(){
        mul = a * b;
        cout <<"Muliplication is: " << mul << endl;
    }
};
class division:public arithmetic{
    public:
    int operation(){
        div = a / b;
        cout <<"Division is: " << div << endl;
    }
};

int main() {
    arithmetic *ari,p;
    substarct subt;
    multiply mult;
    division divd;

    ari = &p;
    ari->values(30,10);
    ari-> operation();

    ari = &subt;
    ari->values(40,10);
    ari-> operation();

    ari = &mult;
    ari->values(50,10);
    ari-> operation();
    
    ari = &divd;
    ari->values(30,10);
    ari-> operation();
}

