#include <iostream>
using namespace std;

int main() {
    int xArray[] = {1, 2, 3};
    int *arrayPointer = xArray;
    
    cout << "X is: " << *xArray << endl;
    cout << "X is: " << xArray[0] << endl;

    cout << endl << endl;

    cout << "X is: " << *arrayPointer << endl;
    cout << "X is: " << arrayPointer[0] << endl;

    return 0;
}