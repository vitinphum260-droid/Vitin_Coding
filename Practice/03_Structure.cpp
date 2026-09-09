#include <iostream>
using namespace std;
struct Student{
    string id;
    string name;
    float score;
    float average;
};
int main(){
    Student student[6];
    for(int i = 1; i <= 5; i++){
        cout <<"Enter your ID: "; cin>> student[i].id;
        cout <<"Enter your Name: "; cin.ignore(), getline(cin, student[i].name);
        cout <<"Enter your Score: "; cin>> student[i].score;
        cout <<endl;
    }
    cout <<"=========Student Information================="<<endl;
    for(int i = 1; i <= 5; i++){
        cout <<"Student "<< i <<":"<<endl;
        cout <<"ID: "<< student[i].id <<endl;
        cout <<"Name: "<< student[i].name <<endl;
        cout <<"Score: "<< student[i].score <<endl;
        cout <<endl;
    }
    for(int i = 1; i <= 5; i++) {
        student[6].average += student[i].score;
    }
    cout <<"Average Score: "<< student[6].average <<endl;
    return 0;
}
