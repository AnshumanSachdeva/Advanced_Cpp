//to display the name, roll, marks and average of student
#include<iostream>
using namespace std;
class Student{
    protected:
    int roll;
    char name[100];
};
class Exam{
    protected:
    int sub1,sub2,sub3;
};
class Grade:public Student, public Exam{
    int avg;
    public:
    void get_data();
    void display_data();
    void average();
};

void Grade :: get_data(){
    cout << "Enter roll no. ";
    cin >> roll;
    cout << "Enter Name ";
    cin >> name;
    cout << "Enter marks for subject1 ";
    cin >> sub1;
    cout << "Enter marks for subject2 ";
    cin >> sub2;
    cout << "Enter marks for subject3 ";
    cin >> sub3;
}
void Grade :: display_data(){
    cout << "Name is " << name << endl;
    cout << "Roll no. is " << roll << endl;
}
void Grade :: average(){
    int total = sub1 + sub2 + sub3;
    cout << "Total marks " << total << endl;
    avg = total / 3;
    cout << "Average is " << avg << endl;
}

int main(){
    Grade g1;
    g1.get_data();
    g1.display_data();
    g1.average();
}