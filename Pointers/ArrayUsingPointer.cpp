#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int *pointer = numbers;
    int sum = 0;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> *(pointer + i);
        sum = sum + *(pointer + i);
    }

    cout << "Array values: ";
    for (int i = 0; i < 5; i++) {
        cout << *(pointer + i) << " ";
    }

    cout << "\nSum = " << sum;

    return 0;
}
