#include <iostream>
using namespace std;

enum Light { RED = 1, YELLOW, GREEN };

int main() {
    int choice;

    cout << "1. Red\n2. Yellow\n3. Green\nChoose a light: ";
    cin >> choice;

    Light light = static_cast<Light>(choice);

    if (light == RED) {
        cout << "Stop";
    } else if (light == YELLOW) {
        cout << "Get ready";
    } else if (light == GREEN) {
        cout << "Go";
    } else {
        cout << "Invalid choice";
    }

    return 0;
}
