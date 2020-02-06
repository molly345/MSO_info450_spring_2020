//Write a program that asks the user for the radius of a circle and using a function, calculate the circumference of the circle.

#include <iostream>
using namespace std; 

double calculateCircumference(double radius);
const float PI = 3.14159265358979323846;

int main() 
{
    int radius = 0; 
    cout << "Enter the radius of a cirlce: "; 
    cin >> radius; 
    cout << "The circumference is " << calculateCircumference(radius); 
    return 0; 

}
    double calculateCircumference(double radius)  
    {
       return (2*PI*radius);
      
    }
    
    

  
