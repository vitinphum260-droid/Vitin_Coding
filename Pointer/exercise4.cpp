#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Structure
struct Product {
    int id;
    string name;
    double price;
    int quantity;
};

// Display all products
void displayProducts(Product* products, int size) {
    cout << "\n================ PRODUCT LIST ================\n";
    cout << left
         << setw(8) << "ID"
         << setw(20) << "Name"
         << setw(10) << "Price"
         << setw(10) << "Stock" << endl;

    cout << "-------------------------------------------------\n";

    for (int i = 0; i < size; i++) {
        cout << left
             << setw(8) << (products + i)->id
             << setw(20) << (products + i)->name
             << "$" << setw(9) << fixed << setprecision(2) << (products + i)->price
             << setw(10) << (products + i)->quantity
             << endl;
    }
}

// Find product by ID
Product* findProduct(Product* products, int size, int id) {
    for (int i = 0; i < size; i++) {
        if ((products + i)->id == id) {
            return products + i;
        }
    }
    return nullptr;
}

// Sell product
void sellProduct(Product* product, int quantity) {

    if (quantity <= product->quantity) {
        product->quantity -= quantity;

        cout << "\nSale Successful!\n";
        cout << "Remaining Stock: " << product->quantity << endl;
    }
    else {
        cout << "\nError: Not enough stock!" << endl;
        cout << "Available Stock: " << product->quantity << endl;
    }
}

int main() {

    Product products[10] = {
        {101,"Coca Cola",1.50,20},
        {102,"Pepsi",1.40,15},
        {103,"Water",0.50,50},
        {104,"Coffee",2.50,10},
        {105,"Juice",2.00,12},
        {106,"Milk",1.80,18},
        {107,"Tea",1.20,25},
        {108,"Cookies",3.50,30},
        {109,"Bread",2.20,16},
        {110,"Chocolate",4.00,14}
    };

    int id;
    int quantity;

    displayProducts(products, 10);

    cout << "\nEnter Product ID: ";
    cin >> id;

    Product* p = findProduct(products, 10, id);

    if (p != nullptr) {

        cout << "\nProduct Found!\n";
        cout << "ID: " << p->id << endl;
        cout << "Name: " << p->name << endl;
        cout << "Price: $" << fixed << setprecision(2) << p->price << endl;
        cout << "Stock: " << p->quantity << endl;

        cout << "\nEnter quantity to sell: ";
        cin >> quantity;

        sellProduct(p, quantity);

    } else {

        cout << "\nProduct not found." << endl;
    }

    return 0;
}