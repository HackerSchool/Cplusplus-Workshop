#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *xPointer = &x;
    *xPointer = 2;

    cout << "X is: " << x << endl;
    cout << "X memory position is: " << xPointer << endl;

    return 0;
}