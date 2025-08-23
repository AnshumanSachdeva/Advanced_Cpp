#include<iostream>
using namespace std;
class statx {
    int x;
    public:
    static int sum;
    statx() {
        x = sum++;
    }
    static void stat(){
        cout << "Result is " << sum << endl;
    }
    void number(){
        cout << "Number is " << x << endl;
    }
};
int statx:: sum;    // accessing static variable
int main (){
    statx o1,o2,o3,o4;
    o1.number();
    o2.number();
    o3.number();
    o4.number();
    statx::stat();
    cout << "Now static var sum is " << o1.sum << endl;
    return 0;
}