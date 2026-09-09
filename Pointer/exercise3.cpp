#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Structure definition
struct Product {
    int id;
    string name;
    double price;
    int quantity;
};

int main() {
    Product products[5];
    Product* ptr = products;

    double totalInventoryValue = 0;

    // Input product information
    cout << "========== Enter Product Information ==========\n";

    for (int i = 0; i < 5; i++) {
        cout << "\nProduct " << i + 1 << endl;

        cout << "Enter ID: ";
        cin >> (ptr + i)->id;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, (ptr + i)->name);

        cout << "Enter Price: ";
        cin >> (ptr + i)->price;

        cout << "Enter Quantity: ";
        cin >> (ptr + i)->quantity;
        
        // char choice;
        // cout <<"Do you want to add more:(yes or no/ press Y or N)", cin>>choice;
        // if(choice == 'y' && choice == 'Y'){
        //     continue;
        // }else{
        //     break;
        // }
    }

    // Display products
    cout << "\n\n============= Product List =============\n";

    cout << left
         << setw(8) << "ID"
         << setw(20) << "Name"
         << setw(12) << "Price"
         << setw(10) << "Quantity"
         << setw(12) << "Value" << endl;

    cout << "--------------------------------------------------------------\n";

    for (int i = 0; i < 5; i++) {

        double value = (ptr + i)->price * (ptr + i)->quantity;
        totalInventoryValue += value;

        cout << left
             << setw(8) << (ptr + i)->id
             << setw(20) << (ptr + i)->name
             << "$" << setw(11) << fixed << setprecision(2) << (ptr + i)->price
             << setw(10) << (ptr + i)->quantity
             << "$" << value
             << endl;
    }

    cout << "\n========================================\n";
    cout << "Total Inventory Value = $" << fixed
         << setprecision(2)
         << totalInventoryValue << endl;

    return 0;
}