//Write a program that continually accepts positive values from the user, 
//calculates the square of that value and outputs the results to the console. 
//When the user enters '0', execution should stop.

#include <iostream>
#include <cmath> 
using namespace std; 

int main()

{
    double number, exponent, result; 

    cout << "Enter a positive number: ";
    cin >> number;

   exponent = 2; 
    result = pow(number, exponent); 
    if(number >0){
           cout << number << "^" << exponent << "= " << result; 
    }

return 0; 
}
    

