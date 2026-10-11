#include <iostream>
using namespace std;

int main() {
    int number;
    int *pointer = &number;
    cout << "Enter a number: ";
    cin >> number;

    *pointer = *pointer * 2;

    cout << "The number doubled is " << number;

    return 0;
}
