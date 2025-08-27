#include<iostream>
using namespace std;
class abstractinterface {
    public:
    virtual void numbers() = 0;
    void input();
    int a, b;
};
void abstractinterface :: input() {
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
}
class add : public abstractinterface{
    public:
    void numbers(){
        int sum;
        sum = a+b;
        cout << "Sum is: " << sum << endl;
    }
};
class sub : public abstractinterface{
    public:
    void numbers(){
        int diff;
        diff = a-b;
        cout << "diff is: " << diff << endl;
    }
};

int main() {
    add a1;
    a1.input();
    a1.numbers();
    sub s1;
    s1.input();
    s1.numbers();
    return 0;
}