#include <iostream>
using namespace std;
struct Student{
    string id;
    string name;
    int age;
    char grade;

};
struct BankAccount{
    string id;
    string name;
    float balance;

};
// Parameter Constructor
struct BankAccount1{
    string id;
    string name;
    float amount;
    BankAccount1 (string i, string n, float a) : id(i), name(n), amount(a){ // it is primary constructor
        
        // cout <<"ID: "<< id <<endl;
        // cout <<"Name: "<< name <<endl;
        // cout <<"Amount: "<< amount <<endl;
        // cout <<endl;
    }
    BankAccount1 (string i,string first_name, string last_name, float a) : id(i), name(first_name + ' ' + last_name), amount(a){ // Secondary constructor
        // do something
    }
    BankAccount1() = default; 
    // default constructor
    //BankAccount1(): id(0), name(""), amount(0){}
};
// default constructor
struct BankAccount2{
    string id;
    string name;
    char gender;
    BankAccount2(): id(""), name(""), gender(){}
};

// function
void display(BankAccount1 object){
    cout <<"ID: "<< object.id <<endl;
    cout <<"Name: "<< object.name <<endl;
    cout <<"Amount: "<< object.amount <<endl;
    cout <<endl;
}
int main(){
    Student p1;
    p1. id = "0001";
    p1.name = "bro";
    p1.age = 20;
    p1.grade = 'A';
    cout <<"ID: "<< p1.id <<endl;
    cout <<"Name: "<< p1.name <<endl;
    cout <<"Age: "<< p1.age <<endl;
    cout <<"Grade: "<< p1.grade <<endl;
    cout <<endl;

    BankAccount p2 = {.id = "0002", .name= "Nokea", .balance= 10000};
    cout<<"ID: "<< p2.id <<endl;
    cout<<"Name: "<< p2.name <<endl;
    cout<<"Balace: "<< p2.balance <<endl;
    cout<< endl;

    
    
    // Called Parameter constructor
    BankAccount1 obj("0003", "niko", 1000);
    /**Secondary constructor**/ 
    BankAccount1 obj1("0004", "vitin", "phum", 2000);

    BankAccount1 array[2] = {obj, obj1};
    for(int i = 0; i < 3; i++){
        cout <<"ID: "<< array[i].id <<endl;
        cout <<"Name: "<< array[i].name <<endl;
        cout <<"Amount: "<<  array[i].amount <<endl;
        cout <<endl;
    }
    
    // called default constructor
    BankAccount1 object{};
    BankAccount2 ac;
    ac.id = ("0005"); // must to research it
    ac.name = ("vitin");
    ac.gender = ('M');
    cout <<"ID: "<< ac.id <<endl;
    cout <<"Name: "<< ac.name <<endl;
    cout <<"Gender: "<< ac.gender <<endl;
    cout <<"\n"; 

    // called function
    display(obj);
    display(obj1);
    return 0;
}