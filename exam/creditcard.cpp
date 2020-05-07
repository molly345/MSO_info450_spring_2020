#include "creditcard.h"
#include <string> 
#include <iostream> 
using namespace std;

CreditCard :: CreditCard() : Account() {};
CreditCard :: CreditCard(string full_name, long ss_num, double acct_bal) 
    :Account(full_name, ss_num, acct_bal) {}; 

void CreditCard :: DoCharge(int name, double amount) {
    for (int i = 0; i<10; i++){
        last10charges[num_withdraws%10] = name;
        }  
    balance -=amount; 
    num_withdraws += 1; 
}

void CreditCard :: MakePayment(double amount) {
    balance += amount; 
    num_deposits += 1; 
}

void CreditCard :: display() {
    cout << "Account charges: " << last10charges << endl;
    cout << "Deposits: " << num_deposits << endl;
    cout << "Name: " << GetName() << endl; 
    cout << "TaxID: " << GetTaxID() << endl; 
    cout << "Balance: " << Getbalance() << endl; 
}
