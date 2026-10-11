#include <iostream>
using namespace std;

union Pay {
    float monthlySalary;
    float hourlyRate;
};

int main() {
    Pay employeePay;
    int choice;
    cout << "1. Monthly salary\n2. Hourly pay\nChoose: ";
    cin >> choice;
    if (choice == 1) {
        cout << "Enter monthly salary: ";
        cin >> employeePay.monthlySalary;
        cout << "Monthly salary = " << employeePay.monthlySalary;
    } else if (choice == 2) {
        int hours;
        cout << "Enter hourly rate and hours worked: ";
        cin >> employeePay.hourlyRate >> hours;
        cout << "Total pay = " << employeePay.hourlyRate * hours;
    } else {
        cout << "Invalid choice";
    }

    return 0;
}
