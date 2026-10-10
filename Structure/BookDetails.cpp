#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    float price;
};

int main() {
    Book book;

    cout << "Enter the book title: ";
    cin >> book.title;
    cout << "Enter the author: ";
    cin >> book.author;
    cout << "Enter the price: ";
    cin >> book.price;

    cout << "\nBook details\n";
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Price: " << book.price << endl;

    return 0;
}
