#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int &xReference = x;
    xReference = 2;

    cout << "X is: " << x << endl;
    cout << "X is: " << xReference << endl;

    return 0;
}