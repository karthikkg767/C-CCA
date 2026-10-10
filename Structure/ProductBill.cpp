#include <iostream>
#include <string>
using namespace std;

struct Product {
    string name;
    float price;
    int quantity;
};

int main() {
    Product product;

    cout << "Enter product name: ";
    cin >> product.name;
    cout << "Enter price: ";
    cin >> product.price;
    cout << "Enter quantity: ";
    cin >> product.quantity;

    cout << "Total cost = " << product.price * product.quantity;

    return 0;
}
