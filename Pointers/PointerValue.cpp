#include <iostream>
using namespace std;

int main() {
    int number;
    int *pointer;

    cout << "Enter a number: ";
    cin >> number;

    pointer = &number;

    cout << "Value of number = " << number << endl;
    cout << "Value using pointer = " << *pointer << endl;

    return 0;
}
