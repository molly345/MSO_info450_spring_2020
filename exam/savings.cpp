#include "savings.h"
#include <iostream> 
using namespace std;

Savings :: Savings() : Account() {}; 
Savings :: Savings(string full_name, long ss_num, double acct_bal) 
    : Account(full_name, ss_num, acct_bal) {}; 

void Savings :: DoDeposit (double amount) {
    balance += amount; 
    num_deposits +=1; 
}

void Savings :: DoWithdraw (double amount){
    balance -= amount; 
    num_withdraws += 1; 
}

void Savings :: display() {
    cout << "Withdraws: " << num_withdraws << endl;
    cout << "Deposits: " << num_deposits << endl;
    cout << "Name: " << GetName() << endl; 
    cout << "TaxID: " << GetTaxID() << endl; 
    cout << "Balance: " << Getbalance() << endl; 
}
