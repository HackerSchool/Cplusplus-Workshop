#include <iostream>
using namespace std;

void main() {
    int x = myFunction();
    cout << "My X is: " << x << endl;
}

int myFunction() {
    cout << "I work" << endl;
    return 1;
}