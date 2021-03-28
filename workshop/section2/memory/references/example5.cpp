#include <iostream>
using namespace std;

int main() {
    int x = 5;
    myFunction(x);
    return 0;
}

void myFunction(int& xReference) {
    cout << "X is: " << xReference << endl;
    cout << "X memory position is: " << xReference << endl;
}