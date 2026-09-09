#include <iostream>
#include <cmath>
using namespace std;
int main() {
    /*string name = "Vitin";
    int age = 20;
    float gpa = 3.80;
    char initial = 'A';
    cout << name <<endl;
    cout << age <<endl;
    cout << gpa <<endl;
    cout << initial <<endl;
    return 0;*/

    /*Write a program that uses constants to compute the following:
    Declare const float PI = 3.14159
    Declare float radius = 7.5
    Compute and print:
    Area of circle = PI * r * r
    Circumference = 2 * PI * r
    Use const int DAYS_WEEK = 7 and print how many hours are in a week*/

    const float PI = 3.14159;
    float r = 7.5; 
    float area = PI * pow(r, 2);
    float circumference = 2 * PI * r;
    cout <<"Area of circle is : "<< area <<endl;
    cout <<"Circumference is : "<< circumference <<endl;

    const int dayOfWeek = 7;
    int h = 24;
    int t = dayOfWeek * h;
    cout <<"The time is: "<< t <<endl;
    return 0;
}
