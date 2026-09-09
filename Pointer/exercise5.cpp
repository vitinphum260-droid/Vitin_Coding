#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Product {
    int id;
    string name;
    double price;
    int quantity;
};

// Function Prototypes
void addProduct(Product* products, int* count);
void displayProducts(Product* products, int count);
Product* findProduct(Product* products, int count, int id);
void sellProduct(Product* product, int quantity);
void restockProduct(Product* product, int quantity);
double calculateInventoryValue(Product* products, int count);

int main() {

    Product products[10];
    int count = 0;
    int choice;

    do {
        cout << "\n========== RETAIL MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Sell Product\n";
        cout << "5. Restock Product\n";
        cout << "6. Calculate Inventory Value\n";
        cout << "7. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice){

        case 1:
            addProduct(products, &count);
            break;

        case 2:
            displayProducts(products, count);
            break;

        case 3:{
            int id;
            cout << "Enter Product ID: ";
            cin >> id;

            Product* p = findProduct(products, count, id);

            if(p != nullptr){
                cout << "\nProduct Found!\n";
                cout << "ID: " << p->id << endl;
                cout << "Name: " << p->name << endl;
                cout << "Price: $" << fixed << setprecision(2) << p->price << endl;
                cout << "Stock: " << p->quantity << endl;
            }
            else{
                cout << "Product not found.\n";
            }
            break;
        }

        case 4:{
            int id, qty;

            cout << "Enter Product ID: ";
            cin >> id;

            Product* p = findProduct(products, count, id);

            if(p != nullptr){
                cout << "Enter Quantity: ";
                cin >> qty;
                sellProduct(p, qty);
            }
            else{
                cout << "Product not found.\n";
            }
            break;
        }

        case 5:{
            int id, qty;

            cout << "Enter Product ID: ";
            cin >> id;

            Product* p = findProduct(products, count, id);

            if(p != nullptr){
                cout << "Enter Quantity to Add: ";
                cin >> qty;
                restockProduct(p, qty);
            }
            else{
                cout << "Product not found.\n";
            }
            break;
        }

        case 6:
            cout << "\nTotal Inventory Value = $"
                 << fixed << setprecision(2)
                 << calculateInventoryValue(products, count)
                 << endl;
            break;

        case 7:
            cout << "\nThank you for using the system.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while(choice != 7);

    return 0;
}

//================== Functions ==================

void addProduct(Product* products, int* count){

    if(*count >= 10){
        cout << "Product list is full.\n";
        return;
    }

    cout << "\nEnter Product ID: ";
    cin >> (products + *count)->id;

    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, (products + *count)->name);

    cout << "Enter Price: ";
    cin >> (products + *count)->price;

    cout << "Enter Quantity: ";
    cin >> (products + *count)->quantity;

    (*count)++;

    cout << "Product Added Successfully!\n";
}

void displayProducts(Product* products, int count){

    if(count == 0){
        cout << "No products available.\n";
        return;
    }

    cout << "\n------------------------------------------------------------\n";
    cout << left
         << setw(8) << "ID"
         << setw(20) << "Name"
         << setw(12) << "Price"
         << setw(10) << "Stock"
         << endl;

    cout << "------------------------------------------------------------\n";

    for(int i=0;i<count;i++){

        cout << left
             << setw(8) << (products+i)->id
             << setw(20) << (products+i)->name
             << "$" << setw(11)
             << fixed << setprecision(2)
             << (products+i)->price
             << setw(10)
             << (products+i)->quantity
             << endl;
    }
}

Product* findProduct(Product* products, int count, int id){

    for(int i=0;i<count;i++){

        if((products+i)->id == id){
            return products+i;
        }

    }

    return nullptr;
}

void sellProduct(Product* product, int quantity){

    if(quantity > product->quantity){

        cout << "Error: Not enough stock!\n";
        cout << "Available Stock: " << product->quantity << endl;
        return;

    }

    double total = quantity * product->price;

    product->quantity -= quantity;

    cout << "\nSale Successful!\n";
    cout << "Product : " << product->name << endl;
    cout << "Price   : $" << product->price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total   : $" << total << endl;
    cout << "Remaining Stock: " << product->quantity << endl;

}

void restockProduct(Product* product, int quantity){

    product->quantity += quantity;

    cout << "Restock Successful!\n";
    cout << "Current Stock: " << product->quantity << endl;

}

double calculateInventoryValue(Product* products, int count){

    double total = 0;

    for(int i=0;i<count;i++){

        total += (products+i)->price * (products+i)->quantity;

    }

    return total;
}