#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int &aRef = x;
    myFunction(aRef);
    cout << "X is: " << x << endl;

    return 0;
}

void myFunction(int& aRef) {
    aRef = 1;
}