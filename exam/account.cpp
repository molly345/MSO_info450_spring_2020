#include "account.h"
#include <iostream> 
using namespace std; 

Account :: Account() {
    name = "N/A"; 
    taxID = -1; 
    balance = -1; 
}
Account :: Account(string full_name, long ss_num, double acct_bal)
    : name(full_name), taxID(ss_num), balance(acct_bal) {
        name = full_name; 
        taxID = ss_num; 
        balance = acct_bal; 
    }
void Account::SetName(string full_name) {name = full_name;}
string Account::GetName() { return name;}
void Account::SetTaxID(long ss_num) {taxID = ss_num;}
long Account::GetTaxID() {return taxID;}
void Account::Setbalance(double acct_bal) {balance = acct_bal;} 
double Account::Getbalance() {return balance;}
void Account::MakeDeposit(int dep, double bal) {num_deposits = dep, balance = bal;} 
void display(); 

void Account::display() {
    cout << "Name: " << GetName() << endl; 
    cout << "TaxID: " << GetTaxID() << endl; 
    cout << "Balance: " << Getbalance() << endl; 
}
