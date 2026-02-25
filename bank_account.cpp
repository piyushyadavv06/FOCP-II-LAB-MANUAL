
#include<iostream>
using namespace std;

class bankAccount{
    public:
string accountHolderName;
int accountNumber;
double balance;

void inputDetails(){
    cout<<"enter name , number , balance : ";
    cin>>accountHolderName>>accountNumber>>balance;
}

void displayDetails(){
    cout<<"\nholder name : "<<accountHolderName;
    cout<<"\naccount number :"<<accountNumber;
    cout<<"\nbalance : "<<balance;
}

void deposit(double amount){
    cout<<"\nbalance after deposit : "<<amount + balance;
}

void withdraw(double amount){
    if(balance-amount<0){
       cout<<"\nlow balance";
    }
    else
      cout<<"\nbalance after withdraw : "<<balance-amount;
}
};

int main(){
    bankAccount a1;
     a1.inputDetails();
     a1.displayDetails();
     a1.deposit(100000.34);
     a1.withdraw(100000.34);
return 0;
}