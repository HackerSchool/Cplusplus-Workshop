#include <iostream>
using namespace std;

void myFunction(int* xPointer);

int main() {
    int x = 5;
    myFunction(&x);
    return 0;
}

void myFunction(int* xPointer) {
    cout << "X is: " << *xPointer << endl;
    cout << "X memory position is: " << xPointer << endl;
}