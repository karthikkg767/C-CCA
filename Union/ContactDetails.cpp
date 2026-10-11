#include <iostream>
using namespace std;

union Contact {
    long long phoneNumber;
    char email[50];
};

int main() {
    Contact contact;
    int choice;

    cout << "1. Store a phone number\n2. Store an email\nChoose: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter phone number: ";
        cin >> contact.phoneNumber;
        cout << "Phone number: " << contact.phoneNumber;
    } else if (choice == 2) {
        cout << "Enter email: ";
        cin >> contact.email;
        cout << "Email: "<< contact.email;
    } else {
        cout << "Invalid choice";
    }

    return 0;
}