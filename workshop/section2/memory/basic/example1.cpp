#include <iostream>
using namespace std;

int z = 5;

int myFunction(int x);
void otherFunction();

int main() {
    int x = 1;
    int y = 1;

    cout << "My X is: " << x << endl;
    cout << "My Y is: " << y << endl;
    cout << "My Z is: " << z << endl;

    myFunction(x);
    myFunction(y);
    myFunction(z);

    cout << "My X is: " << x << endl;
    cout << "My Y is: " << y << endl;
    cout << "My Z is: " << z << endl;

    otherFunction();
    
    cout << "My Z is: " << z << endl;

    return 0;
}

//even if it returns something nothing
//needs to receive the value returned
int myFunction(int x) {
    x = 5;
    return x;
}

void otherFunction() {
    z = 10;
}