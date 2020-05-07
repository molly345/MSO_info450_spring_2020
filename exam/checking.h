#ifndef CHECKING_H
#define CHECKING_H
#include "account.h"
#include <iostream> 
using namespace std; 

class Checking : public Account 
{
    private: 
        int last10checks [10]; 
    public: 
        Checking();
        Checking(string full_name, long ss_num, double acct_bal);
        void WriteCheck(int checknum, double amount); 
        void CheckDeposit(double amount); 
        void display(); 
};

#endif
