#include <iostream>
#include "account.h"
#include "checking.h"
#include "savings.h"
#include "creditcard.h"
using namespace std; 

int main(){ 
    string prompt= "1. Savings Deposit\n2. Savings withdrawal\n3. Checking Deposit\n4. Write A Check\n5. Credit Card Payment\n6. Make A Charge\n7. Display Savings\n8. Display Checking\n9. Display Credit Card\n0. Exit";
    Checking a1("Molly",123456789,100);
    Savings a2("Molly",123456789,100);
    CreditCard a3("Molly",123456789,100); 
    a1.Setbalance(100); 
    a2.Setbalance(100);
    a3.Setbalance(100); 
    while(true){
        cout << "Checking balance: " << a1.Getbalance() << " ";
        cout << "Savings balance: " << a2.Getbalance() << " ";
        cout << "Credit Card balance: " << a3.Getbalance() << endl;
        cout << prompt << endl;
        int n; 
        cin >> n; 
        switch(n){
            case(0):
                cout << "You are exiting the program." << endl;  
                break; 
            case(1):
                double dp; 
                cout << "Enter the amount to deposit: " << endl; 
                cin >> dp; 
                a2.DoDeposit(dp); 
                break; 
            case(2):
                double wd; 
                cout << "Enter the amount to withdraw: " << endl; 
                cin >> wd; 
                a2.DoWithdraw(wd); 
                break; 
            case(3):
                double depo; 
                cout << "Enter the amount to deposit: " << endl; 
                cin >> depo; 
                a1.CheckDeposit(depo); 
                break; 
            case(4):
                int x;
                double y; 
                cout << "Enter a check number: " << endl; 
                cin >> x;
                cout << "Enter the check amount: " << endl; 
                cin >> y; 
                a1.WriteCheck(x,y);
                break; 
            case(5):
                double pay; 
                cout << "Enter payment amount: " << endl; 
                cin >> pay; 
                a3.MakePayment(pay); 
                break; 
            case(6):
                int n; 
                double charge; 
                cout << "Enter charge amount: " << endl; 
                cin >> charge; 
                a3.DoCharge(10, charge); 
                break; 
            case(7):
                a2.display (); 
                break; 
            case(8):
                a1.display();
                break; 
            case(9):
                a3.display(); 
                break; 
            default: 
                cout << "Invalid option." << endl; 
        } 
    break; 
    }
    return 0; 
}; 
