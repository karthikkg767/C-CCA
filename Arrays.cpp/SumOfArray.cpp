#include <iostream>
using namespace std;

int main() {
    int first[2][2];
    int second[2][2];
    int product[2][2] = {};

    cout << "Enter the values for the first 2x2 matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> first[i][j];
        }
    }

    cout << "Enter the values for the second 2x2 matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> second[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                product[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    cout << "Product of the matrices:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
