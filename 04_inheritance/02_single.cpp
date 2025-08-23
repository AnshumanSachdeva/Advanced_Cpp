//to display the name, roll and marks of student
#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    char name[100];
    public:
    void input();
    void display();
};
void student::input(){
    cout << "Enter roll no."  << endl;
    cin >> roll;
    cout << "Enter name:" << endl;
    cin >> name;
}
void student::display(){
    cout << "Roll no. is " << roll << endl;
    cout << "Name is " << name << endl;
}
class marks:public student{
    int sub1,sub2,sub3,total;
    public:
    void input_exam();
    void display_exam();
};
void marks::input_exam(){
    cout << "Enter Marks of subject1" << endl;
    cin >> sub1;
    cout << "Enter Marks of subject2" << endl;
    cin >> sub2;
    cout << "Enter Marks of subject3" << endl;
    cin >> sub3;
}
void marks::display_exam(){
    total = sub1 + sub2 + sub3;
    cout << "Total is " << total << endl;
}

int main(){
    marks m1;
    m1.input();
    m1.display();
    m1.input_exam();
    m1.display_exam();
    return 0;
}