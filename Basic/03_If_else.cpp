#include <iostream>
using namespace std;
int main() {
    int x = 10;
    cout <<"A : "<< x <<endl;
    float a = 0.1;
    float b = 0.2;
    float e = a + b;
    if(e == 0.3){ // it not true because it convert to binary
        cout <<"E"<<endl;
    }else{
        cout <<"F"<<endl;
    }
    int r = 123;
    float g = 3;
    float f = 2;
    r = r % 6 / g * f - g / 2 * f;
    cout <<r;
}