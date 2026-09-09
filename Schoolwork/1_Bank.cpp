#include <iostream>
#include <string>
using namespace std;
int main() {
    //1. Bank Account System
    //2. Which one do you want to choose (input or withdraw money), Press (i) for input and (w) for withdraw:
    //3. How many cash that you want input to your bank:$
    //4. How many cash, Do you want to withdraw:$ 
    //5. Does the bank gives you a 2% of bonus?(Yes or No): //but need to see a message from bank.
    //6. Do you want to move half your money into a (Saving) account and half into (Spending)?(Yes or No):
    //last one is: Transaction (Deposit(1) & Withdrawal(-1))
    float balance = 10000;
    float cash;
    float sum = 0, minus = 0;
    float multiplication = 0, division = 0, withdraw = 0;
    float bonus;
    float divisionFirst = 0, divisionSecond = 0;
    string decide, get;
    char choice;
    cout <<"============Bank Account System====================="<<endl;
    cout <<"Your banker have: "<< balance <<"$"<<endl;
    cout <<"Which one do you want to choose (input or withdraw money), Press (i) for input and (w) for withdraw: ";
    cin>> choice;
    if(choice == 'I' || choice == 'i'){
        cout <<"How many cash that you want input to your bank:$ ";
        cin>> cash;
        sum = balance + cash;
        cout <<"Your Banker is: "<< sum <<"$"<<endl;
    }else{
        cout <<"How many cash, Do you want to withdraw:$ ";
        cin>>withdraw;
        if(withdraw <= balance){
            minus = balance - withdraw;
            cout <<"The withdraw is: -"<< withdraw <<"$"<<endl;
            cout <<"Your Banker is: "<< minus <<"$"<<endl;
        }else{
            cout <<"Don't have enough money!.Please try again."<<endl;
            return 0; // stop and withdraw again.
        }
    }
    //Check condition
    bool isBonus;
    cout <<"=============Bonus From Bank========================="<<endl;
    if(sum > balance){
        cout <<"You get bonus from your bank."<<endl;
        isBonus = true;
    }else{ 
        cout<<"You don't get bonus from your bank."<<endl;
        isBonus = false;
    }
    //Use Multiplication
    //cout <<"Does the bank gives you a 2% of bonus?(Yes or No): "; cin.ignore(), getline(cin, get);
    if(isBonus && sum > balance ){
        multiplication = balance * 1.02; // must to set this one again and think deep, 10000$ of 2% bonus 
        bonus = multiplication - balance;
        cout <<"Your bonus's banker is: "<< multiplication <<"$"<<endl;
        cout <<"Your bonus is: "<< bonus <<"$"<<endl;
    }else{
        cout <<"No bonus."<<endl;
    }
    //Use Division
    // Tenary Operator
    cout <<"===============Banker After Input or Withdraw============"<<endl;
    (choice == 'i' || choice == 'I') ? cout <<"Your Total Banker is: "<< sum <<"$"<<endl : cout <<"Your Total Banker is: "<< minus <<"$"<<endl;
    cout <<"===============Saving Bank==============================="<<endl;
    cout <<"Do you want to move half your money into a (Saving) account and half into (Spending)?(Yes or No): ";
    cin.ignore(), getline(cin, decide);
    if((decide == "Yes" || decide == "yes") && sum == balance ){
        division = balance / 2;
        cout <<"1.Your saving accout get: "<< division <<"$"<<endl;
    }else if((decide == "Yes" || decide == "yes") && sum > balance ){
        divisionFirst = sum / 2;
        cout <<"2.Your saving accout get: "<< divisionFirst <<"$"<<endl;
    }else if((decide == "Yes" || decide == "yes") && minus < balance){
        divisionSecond = minus / 2;
        cout <<"3.Your saving accout get: "<< divisionSecond <<"$"<<endl;
    }
    else{
        cout <<"Don't move the money from your bank.Thank you."<<endl;
    }
    //Use Increment and Decrement (pre/post)
    cout <<"==============Banker Transaction========================="<<endl;
    int transactionCount = 0;
    if(sum > balance){
        ++transactionCount;
        cout <<"Deposit Transaction"<<endl;
        cout <<"The count of transaction is: "<< transactionCount <<endl;
    }else{
        --transactionCount;
        cout <<"Withdrawal Transaction"<<endl;
        cout <<"The count of transaction is: "<< transactionCount <<endl;
    }
    cout <<"==================Bank Account System====================="<<endl;
    cout <<"The balance is: "<< balance <<"$"<<endl;
    cout <<"Your banker after input cash is: "<< sum <<"$"<<endl;
    cout <<"Your banker after multiply 2% of bonus is: "<< multiplication <<"$"<<endl;
    cout <<"Your bonus is: "<< bonus <<"$"<<endl;
    cout <<"Your saving accout get: "<< divisionFirst <<"$"<<endl; // 2
    cout <<"Your withdrawing is: -"<< withdraw <<"$"<<endl;
    cout <<"Your banker after withdrawing is: "<< minus <<"$"<<endl;
    cout <<"Your saving accout get: "<< divisionSecond <<"$"<<endl; // 3
    cout <<"Your saving accout get: "<< division <<"$"<<endl; // 1
    cout <<"The count of transaction is: "<< transactionCount <<endl;
    return 0;
}