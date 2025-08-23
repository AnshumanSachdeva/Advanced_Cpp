// create a class that declares a static variable, decriment the variable and print the value
#include<iostream>
using namespace std;
class Minu {
    int a;
    public:
    static int num;
    Minu(){
        a = num--;
        cout << "After decriment a:" << a << endl;
    }
};
int Minu::num;
int main() {
    Minu m1,m2,m3;
    return 0;
}
