#include <iostream>
using namespace std;

int myFunction();

int main() {
    int x = myFunction();
    cout << "My X is: " << x << endl;

    return 0;
}

int myFunction() {
    cout << "I work" << endl;
    return 1;
}