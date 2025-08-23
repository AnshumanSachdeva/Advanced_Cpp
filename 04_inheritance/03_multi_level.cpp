//to display the name, roll and marks of student
#include<iostream>
using namespace std;
class Roll {
    int roll;
    public:
    void input_roll();
    void display_roll();
};
void Roll :: input_roll(){
    
    cout << "Enter Roll no. " ;
    cin >> roll;
    cout << endl;
}
void Roll :: display_roll(){
    
    cout << "Roll no. is " << roll ;
    cout << endl;
}

class Name: public Roll {
    char Name[100];
    public:
    void input_Name();
    void display_Name();
};
void Name :: input_Name(){
    
    cout << "Enter Name  " ;
    cin >> Name;
    cout << endl;
}
void Name :: display_Name(){
    
    cout << "Name is " << Name ;
    cout << endl;
}

class Marks: public Name {
    int Marks;
    int sub1,sub2,sub3;
    public:
    void input_Marks();
    void display_Marks();
};
void Marks :: input_Marks(){
    
    cout << "Enter Marks for sub1 " ;
    cin >> sub1;
    cout << "Enter Marks for sub2 " ;
    cin >> sub2;
    cout << "Enter Marks for sub3 " ;
    cin >> sub3;
    Marks = sub1 + sub2 + sub3;
    cout << endl;
}
void Marks :: display_Marks(){
    
    cout << "Marks is " << Marks ;
    cout << endl;
}
int main(){
    Marks m1;
    m1.input_roll();
    m1.input_Name();
    m1.input_Marks();

    m1.display_roll();
    m1.display_Name();
    m1.display_Marks();

}