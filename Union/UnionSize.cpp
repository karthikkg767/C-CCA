#include <iostream>
using namespace std;

union Data {
    int number;
    float decimal;
    char text[20];
};

int main() {
    cout << "Size of int = " << sizeof(int) << " bytes" << endl;
    cout << "Size of float = " << sizeof(float) << " bytes" << endl;
    cout << "Size of union = " << sizeof(Data) << " bytes" << endl;

    return 0;
}
