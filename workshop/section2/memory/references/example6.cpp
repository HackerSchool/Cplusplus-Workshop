#include <iostream>
using namespace std;

void myFunction(int &xReference);

int main() {
    int x = 5;
    
    myFunction(x);
    cout << "X is: " << x << endl;

    return 0;
}

void myFunction(int &xReference) {
    xReference = 2;
}