#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *xPointer = &x;

    cout << "X is: " << *xPointer << endl;
    cout << "X memory position is: " << xPointer << endl;

    return 0;
}