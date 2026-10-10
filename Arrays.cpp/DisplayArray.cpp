#include <iostream>
using namespace std;

int main() {
    int numbers[2][2];
    int sum = 0;

    cout << "Enter the values for a 2x2 array:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> numbers[i][j];
            sum = sum + numbers[i][j];
        }
    }

    cout << "The array is:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sum of all elements = " << sum;

    return 0;
}
