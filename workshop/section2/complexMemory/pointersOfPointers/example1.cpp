#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *xPointer = &x;
    int **xPointerOfPointer = &xPointer;

    //does not work because (&x) does not 
    //have a memory position, it's a value
    //int **xPointerOfPointer2 = &(&x);
    
    cout << "X is: " << x << endl;
    cout << "X memory position is: " << xPointer << endl;
    cout << "X pointer memory position is: " << xPointerOfPointer << endl;


    cout << "X is: " << **xPointerOfPointer << endl;
    cout << "X memory position is: " << *xPointerOfPointer << endl;
    return 0;
}