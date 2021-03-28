#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *xPointer = &x;
    int **xPointerOfPointer = &xPointer;
    int ***xPointerOfPointerOfPointer = &xPointerOfPointer;
    int ****xPointerOfPointerOfPointerOfPointer = &xPointerOfPointerOfPointer;
    int *****xPointerOfPointerOfPointerOfPointerOfPointer = &xPointerOfPointerOfPointerOfPointer;

    cout << "X is: " << x << endl;
    cout << "X memory position is: " << xPointer << endl;
    cout << "X pointer memory position is: " << xPointerOfPointer << endl;
    cout << "X pointer pointer memory position is: " << xPointerOfPointerOfPointer << endl;
    cout << "X pointer pointer pointer memory position is: " << xPointerOfPointerOfPointerOfPointer << endl;
    cout << "X pointer pointer pointer pointer memory position is: " << xPointerOfPointerOfPointerOfPointerOfPointer << endl;

    return 0;
}