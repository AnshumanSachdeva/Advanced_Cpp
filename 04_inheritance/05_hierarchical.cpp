//to display the name, roll, marks and average of student
#include<iostream>
#include <cstring>
using namespace std;

class Student {
public:
    int roll;
    char name[50];

    void input_student() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
    }

    void display_student() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

class Marks : public Student {
public:
    int m1, m2, m3;

    void input_marks() {
        cout << "Enter marks in 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void display_marks() {
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
    }
};

class Average : public Student {
public:
    int m1, m2, m3;
    float avg;

    void take_marks_from(Marks obj) {
        m1 = obj.m1;
        m2 = obj.m2;
        m3 = obj.m3;
        avg = (m1 + m2 + m3) / 3.0;
    }

    void display_average() {
        cout << "Average: " << avg << endl;
    }
};

int main() {
    Marks m;
    Average a;

    m.input_student();
    m.input_marks();

    // share student data with average
    a.roll = m.roll;
    strcpy(a.name, m.name);
    a.take_marks_from(m);

    cout << "\n--- Student Details ---" << endl;
    m.display_student();
    m.display_marks();
    a.display_average();

    return 0;
}
