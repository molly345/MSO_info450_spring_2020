#include "checking.h"
#include <iostream> 
using namespace std;

Checking :: Checking() : Account() {};
Checking :: Checking(string full_name, long ss_num, double acct_bal) 
            :Account(full_name, ss_num, acct_bal) {}; 

void Checking :: WriteCheck(int checknum, double amount) { 
    for(int i = 0; i<10; i++){
        last10checks[num_withdraws%10] = checknum;
        }   
    balance -= amount; 
    num_withdraws += 1; 
}

void Checking :: CheckDeposit(double amount) {
    balance += amount; 
    num_deposits += 1; 
}

void Checking :: display() {
    cout << "Check register: ";
    for(int i = 0;i<10;i++){
        cout << last10checks[i] << ",";
    }
    cout << endl;
    cout << "Deposits: " << num_deposits << endl;
    cout << "Name: " << GetName() << endl; 
    cout << "TaxID: " << GetTaxID() << endl; 
    cout << "Balance: " << Getbalance() << endl; 
} 




            
            
            
            
            
