#include <iostream>
using namespace std;
struct Employee{
    string employeeID;
    string name;
    int basicSalary;
    float totalSalary;
};
int main(){
    Employee emp1;
    cout <<"Enter EmployeeID: "; cin>> emp1.employeeID;
    cout <<"Enter Name: "; cin.ignore(), getline(cin, emp1.name);
    cout <<"Enter BasicSalary: "; cin>> emp1.basicSalary;
    cout <<"\nEmployee Information "<<endl;
    cout <<"Employee ID: "<< emp1.employeeID <<endl;
    cout <<"Employee Name: "<< emp1.name <<endl;
    cout <<"Basic Salary: "<< emp1.basicSalary <<endl;
    cout <<endl;
    emp1.totalSalary = emp1.basicSalary + ( emp1.basicSalary*20/100);
    cout <<"Total Salary: "<< emp1.totalSalary <<endl;
    return 0;
}