#include <iostream>
using namespace std;

enum Day { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main() {
    int choice;

    cout << "Enter a number from 1 to 7: ";
    cin >> choice;

    Day day = static_cast<Day>(choice);

    switch (day) {
        case MONDAY: cout << "Monday"; break;
        case TUESDAY: cout << "Tuesday"; break;
        case WEDNESDAY: cout << "Wednesday"; break;
        case THURSDAY: cout << "Thursday"; break;
        case FRIDAY: cout << "Friday"; break;
        case SATURDAY: cout << "Saturday"; break;
        case SUNDAY: cout << "Sunday"; break;
        default: cout << "Invalid number";
    }

    return 0;
}
