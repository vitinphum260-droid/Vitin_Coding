#include <iostream>
#include <string>
using namespace std;

// Structure definition
struct Product {
    int id;
    string name;
    double price;
};

int main() {
    Product product;
    Product* ptr = &product;

    // Input
    cout << "Enter Product ID: ";
    cin >> ptr->id;

    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, ptr->name);

    cout << "Enter Price: ";
    cin >> ptr->price;

    // Output
    cout << "\n--- Product Information ---" << endl;
    cout << "ID: " << ptr->id << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Price: $" << ptr->price << endl;

    return 0;
}