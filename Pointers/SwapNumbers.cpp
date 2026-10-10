#include <iostream>
using namespace std;

void swapNumbers(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main() {
    int firstNumber, secondNumber;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    swapNumbers(&firstNumber, &secondNumber);

    cout << "After swapping: " << firstNumber << " " << secondNumber;

    return 0;
}
