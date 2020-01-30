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