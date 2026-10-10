#include <iostream>
using namespace std;

enum Grade { A, B, C, D, F };

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    Grade grade;
    if (marks >= 80) {
        grade = A;
    } else if (marks >= 70) {
        grade = B;
    } else if (marks >= 60) {
        grade = C;
    } else if (marks >= 50) {
        grade = D;
    } else {
        grade = F;
    }

    cout << "Grade: ";
    switch (grade) {
        case A: cout << "A"; break;
        case B: cout << "B"; break;
        case C: cout << "C"; break;
        case D: cout << "D"; break;
        case F: cout << "F"; break;
    }

    return 0;
}
