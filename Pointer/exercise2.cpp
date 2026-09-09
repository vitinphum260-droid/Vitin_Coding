#include <iostream>
#include <string>
using namespace std;

// Structure definition
struct Product {
    int id;
    string name;
    double price;
};

// Function to update the product price
void updatePrice(Product* p, double newPrice) {
    p->price = newPrice;
}

int main() {
    Product product;
    double newPrice;

    // Input product information
    cout << "Enter Product ID: ";
    cin >> product.id;

    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, product.name);

    cout << "Enter Product Price: ";
    cin >> product.price;

    // Display original product
    cout << "\n----- Original Product -----" << endl;
    cout << "ID    : " << product.id << endl;
    cout << "Name  : " << product.name << endl;
    cout << "Price : $" << product.price << endl;

    // Ask for new price
    cout << "\nEnter New Price: ";
    cin >> newPrice;

    // Update price using pointer
    updatePrice(&product, newPrice);

    // Display updated product
    cout << "\n----- Updated Product -----" << endl;
    cout << "ID    : " << product.id << endl;
    cout << "Name  : " << product.name << endl;
    cout << "Price : $" << product.price << endl;

    return 0;
}