#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream> 
using namespace std; 

class Account {
    protected: 
        int num_deposits;
        int num_withdraws; 
    public: 
        string name; 
        long taxID; 
        double balance; 
        Account(); 
        Account(string full_name, long ss_num, double acct_bal); 
        void SetName(string full_name);
        string GetName(); 
        void SetTaxID(long ss_num);
        long GetTaxID();
        void Setbalance(double acct_bal);
        double Getbalance(); 
        void MakeDeposit(int dep, double bal); 
        void display(); 
}; 

#endif 
