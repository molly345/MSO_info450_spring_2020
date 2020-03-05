//Create a function that takes a string as its argument and returns the string in reversed order.
#include <iostream>
#include <string> 
#include <vector>
using namespace std; 

string reverse(string *s1);

int main() {
    string s1; 
    do{
         cout << "Please enter a string: ";  
         getline (std :: cin, s1); 
         s1 = reverse(&s1); 
          cout << "This is your string in reverse order: " << s1 << ".\n"; 
    } while ( !s1.empty()); 
    
    return 0; 
}

string reverse(string *s1) { 
    string retval; 
    while( s1->length() >0 ){
        char c = s1->back(); 
        retval += c; 
        s1->pop_back(); 
    }
    return retval; 
}
