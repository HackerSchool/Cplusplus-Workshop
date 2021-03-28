#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int &xReference = x;

    cout << "X memory position is: " << &x << endl;
    cout << "X memory position is: " << &xReference << endl;

    return 0;
}