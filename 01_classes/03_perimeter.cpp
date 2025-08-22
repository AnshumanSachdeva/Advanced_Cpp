#include<iostream>
using namespace std;
class circle {
    int x;
    public:
    int perimeter(int);
};
int circle :: perimeter(int r){
    x = r;
    return 3.14 * x * 2; 
}
int main () {
    circle c1;
    cout <<" perimeter is " << c1.perimeter(2) << endl;
    return 0;
}