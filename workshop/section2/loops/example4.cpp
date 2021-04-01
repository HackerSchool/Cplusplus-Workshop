#include <iostream>
using namespace std;

int main() {

    char answer;

    while (answer != 'y' && answer != 'n'){           //this is a while loop
        cout << "Would you like to continue? (y/n) "; //the program will only move on from this loop if answer is either equal to 'y' or 'n'
        cin >> answer;
    }

    if (answer == 'n')
        cout << endl << "We are continuing either way." << endl;
    cout << endl << "Moving on to an example of what you shouldn't do with while loops..." << endl;






    while (1){                               //this is an infinite while loop
        cout << "Would you like to continue? (y/n) "; 
        cin >> answer;
        if (answer == 'y' || answer == 'n')  // to stop the infinite loop you need a condition to break it
            break;                           // this works but it's easier to get errors this way, you should use the first exmaple
    }

    if (answer == 'n')
        cout << endl << "We are continuing either way." << endl;
    cout << endl << "Moving on to an example of what you shouldn't do with while loops..." << endl;






    while (0){                               //this is another infinite while loop
        cout << "Would you like to continue? (y/n) "; //however the program doesn't even go over it because 0 is an error message 
        cin >> answer;
        if (answer == 'y' || answer == 'n')  
            break;                           
    }

    return 0;
}