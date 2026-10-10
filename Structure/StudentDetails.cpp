#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};

int main() {
    Student student;

    cout << "Enter student name: ";
    cin >> student.name;
    cout << "Enter roll number: ";
    cin >> student.rollNumber;
    cout << "Enter marks: ";
    cin >> student.marks;

    cout << "\nStudent details\n";
    cout << "Name: " << student.name << endl;
    cout << "Roll number: " << student.rollNumber << endl;
    cout << "Marks: " << student.marks << endl;

    return 0;
}
