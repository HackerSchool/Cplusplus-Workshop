#include <iostream>
using namespace std;

int main() {
    int xArray[] = {1, 2, 3};
    int *arrayPointer = xArray;
    
    cout << "X is: " << *(xArray + 1) << endl;
    cout << "X is: " << xArray[1] << endl;

    cout << endl << endl;

    cout << "X is: " << *(arrayPointer + 1) << endl;
    cout << "X is: " << arrayPointer[1] << endl;

    return 0;
}