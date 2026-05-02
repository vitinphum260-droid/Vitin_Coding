#include <iostream>
using namespace std;

class EnglishClass { // class use Pascal Case
};

int myNumber() {
    return 0;
}

int main() {
    int a, b;
    cout << "Enter one number: "; 
    cin >> a;
    cout << "Enter one number again: "; 
    cin >> b;
    int sum = a * b;
    cout << "The Result is: " << sum << endl;
    
    int myNumber_var; // camel case
    int my_number; // snake case 
    const int MY_NUMBER = 29; // UPPER CASE
    
    return 0;
}
