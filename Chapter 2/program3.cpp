// This program converts gallons to liters. 

#include <iostream>
using namespace std; 

int main()
{
    int gallons, liters; 

    cout << "Enter the number of gallons: ";
    cin >> gallons; // this inputs from the user 

    liters = gallons * 4; //Converts gallons to liters 

    cout << "Liters: " << liters; 

    return 0; 
}
