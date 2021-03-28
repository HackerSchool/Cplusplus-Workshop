#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int &xReference = x;
    
    //does not work
    //int *zPointer = 5;
    //int *zPointer = &5;

    cout << "X is: " << x << endl;
    cout << "X is: " << xReference << endl;

    return 0;
}