#include <iostream>
using namespace std;
struct Student{
    string id;
    string name;
    int age;
};
int main(){
    Student persion1;
    cout <<"Enter ID: "; cin>> persion1.id;
    cout <<"Enter Name: "; cin.ignore(), getline(cin, persion1.name);
    cout <<"Enter age: "; cin>> persion1.age;
    cout <<"Student Information"<<endl;
    cout <<"ID: "<< persion1.id <<endl;
    cout <<"Name: "<< persion1.name <<endl;
    cout <<"Age: "<< persion1.age <<endl;
    return 0;
}