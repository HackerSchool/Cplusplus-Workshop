#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *xPointer = &x;
    
    //does not work
    //int *zPointer = 5;
    //int *zPointer = &5;

    cout << "X is: " << x << endl;
    cout << "X memory position is: " << xPointer << endl;

    return 0;
}