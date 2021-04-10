#include <iostream>
using namespace std;

int main() {

    char answer;

    //this is a while loop
    while (answer != 'y' && answer != 'n') {
        //the program will only move on from this loop if answer is either equal to 'y' or 'n'
        cout << "Would you like to continue? (y/n) ";
        cin >> answer;
    }

    if (answer == 'n')
        cout << endl << "We are continuing either way." << endl;

    cout << endl << "Moving on to an example of what you shouldn't do with while loops..." << endl;

    //this is an infinite while loop
    //while(true)
    while (1) {                               
        cout << "Would you like to continue? (y/n) "; 
        cin >> answer;
         // to stop the infinite loop you need a condition to break it
        if (answer == 'y' || answer == 'n')
            // this works but it's easier to get errors this way, you should use the first exmaple
            break;                           
    }

    if (answer == 'n')
        cout << endl << "We are continuing either way." << endl;






    //the program does not enter this while loop, since the condition (0) evaluates to false
    //while(false)
    while (0){                              
        cout << "Would you like to continue? (y/n) ";
        cin >> answer;
        if (answer == 'y' || answer == 'n')  
            break;                           
    }

    return 0;
}