//Write a program that reads a set of 10 whole numbers from the user into an array.
//Once read in, it calculates the mean and the standard deviation of the numbers then displays the results to the console.

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;


int number();
double findmean(int usernumbers[]);
double findSD(int usernumbers[], double mean);

int number(){
    int value;
    cout << "Enter a whole number.\n";
    cin >> value;
    return value;
}

double findmean(int usernumbers[]){
    int sum = 0;
    double mean;
    for(int i = 0; i < 10; i++)
    {
      sum += usernumbers[i]; 
    }
    mean = double(sum)/10;
    return mean;
}
double findSD(int usernumbers[], double mean)
{
    double sigma=0;
    double stdev;
    for(int i = 0; i < 10; i++)
    {
        sigma = pow(usernumbers[i]- mean, 2);
    }
    stdev  = sqrt(sigma/10);
}

int main(){
    int array[10];
    double mean;
    double stdev;
    for(int i = 0; i < 10; i++)
    {
        array[i]=number();
    }
    cout << "Whole numbers entered: .\n";
    for(int n = 0; n < 10 ; n++)
    {
        cout << n+1 <<": "<< array[n] << endl;
    }

    mean = findmean(array);
    cout << "The mean value is: " << mean << endl; 

    stdev = findSD(array, mean);
    cout << "The standard deviation is: " << stdev << endl; 


    return 0;
}
