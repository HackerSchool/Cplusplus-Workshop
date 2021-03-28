#include <iostream>
using namespace std;

int main() {
    int x = 5;
    
    myFunction(&x);
    cout << "X is: " << x << endl;

    return 0;
}

void myFunction(int* xPointer) {
    *xPointer = 2;
}