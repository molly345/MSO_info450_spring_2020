#ifndef SAVINGS_H
#define SAVINGS_H
#include "account.h"
#include <iostream> 
using namespace std; 

class Savings : public Account {
    public: 
    Savings(); 
    Savings(string full_name, long ss_num, double acct_bal);
    void DoDeposit (double amount); 
    void DoWithdraw (double amount); 
    void display(); 
}; 

#endif
