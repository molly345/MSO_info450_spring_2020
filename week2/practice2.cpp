//Write a program that continually accepts values from the user, 
//determines if the value is a prime number and prints the result to the console. 
//When the user enters a 0, then execution stops.

#include <iostream>
using namespace std; 

int main()
{
    int number, i; 
    bool prime = true; 
  
do{
    cout <<"Input any number: ";
    cin >> number;   
    for(i = 2; i <= number/2; ++i)
    {
       if (number % i ==0)
       {
           prime = false; 
           break; 
       }
    }
    if (i > (number/i))
    cout << number << " is prime.\n";
    else 
    cout << number << " is not prime.\n";
} while (number != 0); 

return 0; 
}

