#include <iostream>
using namespace std;

enum Operation { ADD = 1, SUBTRACT, MULTIPLY, DIVIDE };

int main() {
    int choice;
    float firstNumber, secondNumber;

    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\nChoose an operation: ";
    cin >> choice;
    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    Operation operation = static_cast<Operation>(choice);

    switch (operation) {
        case ADD: cout << firstNumber + secondNumber; break;
        case SUBTRACT: cout << firstNumber - secondNumber; break;
        case MULTIPLY: cout << firstNumber * secondNumber; break;
        case DIVIDE:
            if (secondNumber != 0) {
                cout << firstNumber / secondNumber;
            } else {
                cout << "Cannot divide by zero";
            }
            break;
        default: cout << "Invalid choice";
    }

    return 0;
}
