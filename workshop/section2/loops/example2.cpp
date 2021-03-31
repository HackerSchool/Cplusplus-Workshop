#include <iostream>
using namespace std;

int main() {

    cout << "Let's go over the multiplication table!" << endl;

    for (int i = 1; i <= 10; i++){                           // this a for loop going from 1 to 10
        for (int j = 1; j <= 10; j++)                         // this is another for loop going from 1 to 10
            cout << i << " * " << j << " = " << i*j << endl; //the program will enter the loops with i = 1, it will go over all of the js and then continue to i = 2, etc
        cout << endl; 
    }

    cout << endl;

    return 0;
}