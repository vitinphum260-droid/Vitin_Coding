#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};

    int *p = arr;

    for(int i=0; i<5; i++) {
        cout << *(p+i) << endl;
    }
    for(int i=0; i<5; i++) {
        cout << (p+i) <<endl;
    }
    cout <<"\n"<< p <<endl;


    return 0;

}