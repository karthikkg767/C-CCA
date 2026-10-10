#include <iostream>
using namespace std;

union Number {
    int wholeNumber;
    float decimalNumber;
};

int main() {
    Number value;

    cout << "Enter a whole number: ";
    cin >> value.wholeNumber;
    cout << "Whole number = " << value.wholeNumber << endl;

    cout << "Enter a decimal number: ";
    cin >> value.decimalNumber;
    cout << "Decimal number = " << value.decimalNumber << endl;

    return 0;
}
