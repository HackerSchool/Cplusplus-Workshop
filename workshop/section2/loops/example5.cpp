#include <iostream>
using namespace std;

int main() {

    char answer;

    // this is a do while loop, it's the exact same as a while loop, except the code inside the loop is ran first and only after the condition is checked
    do {
        cout << "Would you like to continue? (y/n) "; 
        cin >> answer;
    } while (answer != 'y' && answer != 'n');
    
    cout << endl;

    cout << "Yay, you're with loops!" << endl;

    return 0;
}