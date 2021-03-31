#include <iostream>
using namespace std;

void myFunction(int* xPointer);
void myFunction2(int xPointer[]);
void myFunction3(int& xRef);

int main() {
    int xArray[] = {1, 2, 3};
    
    myFunction(xArray);
    
    //does not work since xarray is a pointer not a int
    //myFunction3(xArray);

    cout << "X is: " << *xArray << endl;
    cout << "X is: " << xArray[0] << endl;

    myFunction2(xArray);
    
    cout << "X is: " << *xArray << endl;
    cout << "X is: " << xArray[0] << endl;

    return 0;
}

void myFunction(int* xPointer) {
    *xPointer = 2;
}

void myFunction2(int xPointer[]) {
    *xPointer = 3;
}

void myFunction3(int& xRef) {
    xRef = 1;
}