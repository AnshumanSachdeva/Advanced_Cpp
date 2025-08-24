#include<iostream>
using namespace std;
int add (int a, int b, int c){
    return a+b+c;
}
float add (float d, float e){
    return d + e;
}
int main () {
    cout << add(1,2,3) << endl;
    cout << add(3.34,6.66);
}