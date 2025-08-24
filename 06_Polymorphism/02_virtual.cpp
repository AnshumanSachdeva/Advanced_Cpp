#include<iostream>
using namespace std;
class Parallelogram {
    protected:
    int width, height, ar;
    public:
    void values(int a, int b){
        width = a;
        height = b;
    }
    virtual int area(){
        ar = width * height;
        cout << "Area of Parallelogram is: " << ar << endl;
    }
};

class Rectangle : public Parallelogram {
    public:
    int area(){
        ar = width * height;
        cout << "Area of Rectangle is:" << ar << endl;
    }
};
class Triangle : public Parallelogram {
    public:
    int area(){
        ar = 0.5 * width * height;
        cout << "Area of Trianlge is:" << ar << endl;
    }
};

int main() {
    Parallelogram *paral , p1;
    Rectangle r1;
    Triangle t1;

    paral = &p1;
    paral->values(20, 10);
    paral->area();
    
    paral = &r1;
    paral->values(20, 10);
    paral->area();

    paral = &t1;
    paral->values(20, 10);
    paral->area();

}