//Write a program that continually accepts positive values from the user, 
//calculates the square of that value and outputs the results to the console. 
//When the user enters '0', execution should stop.

#include <iostream>
#include <cmath> 
using namespace std; 

int main()

{
    double number, exponent, result; 

do {
     cout << "Enter a positive number: ";
     cin >> number;
if (number > 0) {
       exponent = 2; 
     result = pow(number, exponent); 
     cout << number << "^" << exponent << "= " << result;  
    }
else {
    cout << " Please input a positive number.\n";
     }

} while ( number != 0); 

return 0; 
}
    

