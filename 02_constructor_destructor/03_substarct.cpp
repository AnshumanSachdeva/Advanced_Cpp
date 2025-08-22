#include<iostream>
using namespace std;
class Substarct {
    int a,b;
    public:
    int sub(int a, int b){
        return (a-b);
    }
    Substarct();    // default constructor
};
Substarct::Substarct(){
}
int main(){
    int x;
    Substarct s;
    x = s.sub(4,3);
    cout << "substarction is "<< x << endl;
    return 0;
}