#ifndef CREDITCARD_H
#define CREDITCARD_H
#include "account.h"
#include <iostream> 
using namespace std; 

class CreditCard: public Account 
{
    public: 
        long cardnumber; 
        int last10charges [10]; 
        CreditCard(); 
        CreditCard(string full_name, long ss_num, double acct_bal);
        void DoCharge(int name, double amount); 
        void MakePayment(double amount); 
        void display(); 
};

#endif 
