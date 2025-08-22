#include<iostream>
using namespace std;
class square {
    int x;
    public:
    int area(int);
};
int square ::area(int a){       // :: is called scope resolution operator, yeh batayega ki area fn koi global fn nhi hai and is a member fn of class square
    x = a;
    return x*x;
}

int main()
{
    square sqr;     // craeting object of class square
    cout << "Area is "<< sqr.area(4)<<endl;
    return 0;
}