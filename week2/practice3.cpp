//Write a program that continually accepts a year value from a user and determines if it is a leap year.

//The year can be evenly divided by 4
//If the year can be divided by 100 it is NOT a leap year, unless
//The year is also evenly divisible by 400, then it is a leap year.
//2000 and 2400 are leap years
//1800 and 1900 are not leap years

#include <iostream>
using namespace std; 

int main()
{

  int year; 

  do{
      cout << "Enter a year value: "; 
      cin >> year; 
      if (year % 4 ==0){
      
      if (!(year % 100 ) && (year % 400 ==0)) {
        cout << year << " is a leap year.\n"; 
      }
      else {
        cout << year << " is not a leap year.\n"; 
      }
      }
      else {
        cout << year << " is a leap year.\n"; 
      }
  } 
  while (year > 0); 
  return 0; 
}