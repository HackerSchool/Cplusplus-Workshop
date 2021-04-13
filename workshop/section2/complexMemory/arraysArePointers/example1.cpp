#include <iostream>
using namespace std;

int main() {
    int xArray[] = {1, 2, 3};
    int *arrayPointer = xArray;

    cout << "array memory position is: " << xArray << endl;
    cout << "array memory position is: " << arrayPointer << endl;

    return 0;
}