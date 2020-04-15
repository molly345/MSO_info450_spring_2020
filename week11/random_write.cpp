//Write a program that generates a list of 1,000 random integers, between -1,000 and 1,000, and writes them to a file.
#include <iostream> 
#include <fstream>
using namespace std; 


int main(){

    int n = 1000; 
    ofstream out;  
    out.open("randoms.txt"); 
    for (int i=0; i<n; i++)
    {
        out<< (rand()% 1999) -999 << endl; 
    }
out.close(); 
return 0; 

}
