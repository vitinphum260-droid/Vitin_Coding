#include <iostream>
using namespace std;
int g = 30; // global variable
int main() {
    int k = 10; // local variable
    for(int i=0; i<3; i++){
        int b = 5;
        cout <<"block variable b: "<< b <<endl;
        cout <<"block variable i: "<< i <<endl;
        cout <<"block variable g: "<< ::g <<endl; // use scope resolution operator
    }
    cout <<endl;
    cout <<"value of variable g: "<< g <<endl;
    return 0;
}