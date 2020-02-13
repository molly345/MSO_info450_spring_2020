//Write a program that inputs the names of the students in the class (to a max of 30 names)
//Store them in a 2-dimensional array
//Then output the class list to the console when the user enters an empty string (by pressing enter)

#include <iostream>
using namespace std;

int main(){

    string classList[4][4] = {
                        {"Molly", "Abby", "Josh", "Kate"},
                        {"Yusufu", "Nathan", "Nick", "Sarah"},
                        {"Kelly", "Ned", "Jack", "Missy"},
                        {"Manvir", "Corey", "Jasmine", "Kiersten"},   
    };
    cout << "Press enter for class list." << endl;
    if (cin.get() == '\n') 
    {
        int row; 
        int column;
        for (row = 0;row < 4;row++){
            for (column = 0;column < 4; column++){
                cout << classList[row][column] << endl;
            }
        } 
    } else {
        cout << "You did not press enter.";
    }
    return 0;
}