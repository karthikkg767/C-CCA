#include <iostream>
using namespace std;

struct Rectangle {
    float length;
    float width;
};

int main() {
    Rectangle rectangle;
    cout << "Enter the length and width: ";
    cin >> rectangle.length >> rectangle.width;
    cout << "Area = " << rectangle.length * rectangle.width;

    return 0;
}
