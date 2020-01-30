#include <iostream>
using namespace std; 

int main()
{
  const int RULE_ONE = 4;
  const int RULE_TWO = 100; 
  const int RULE_THREE = 400; 

  int year; 

  do{
      cout << "Enter a year value: "; 
      cin >> year; 
      if (!(year % 100 == 0 ) && (year % 400 == 0)) {
           cout << year << " is a leap year.\n";
      }

      if (year % 4 ==0) {
          cout << year << " is a leap year.\n"; 
      }
       else {
      cout << year << " is not a leap year.\n";      
       }
  } 
  while (year > 0); 

  return 0; 

}