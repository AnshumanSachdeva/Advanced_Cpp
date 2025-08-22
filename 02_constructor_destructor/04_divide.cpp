#include<iostream>
using namespace std;
class Divide {
    int a, b;
    public:
    int div(int a, int b){
        return a/b;
    }
    Divide();
};
Divide::Divide(){}
int main () {
    Divide d1;
    cout << "ans is " << d1.div(10,2) << endl;
}