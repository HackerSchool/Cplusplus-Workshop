#include <iostream>
using namespace std;

void printSomething();
int myFunction();
int add2Numbers(int myX, int myY);
float add2Floats(float myX, float myY);

int main() {
    int x = myFunction();
    int y = add2Numbers(x, myFunction());

    //Does not work!
    //int z = printSomething();

    //Which ones of these work?
    //float z = add2Floats(x,y);
    //float z = add2Floats(1f, 2f);
    //int z = add2Floats(1f, 2f);
    //float z = add2Floats("1", 2);

    cout << "My X is: " << x << endl;
    cout << "My Y is: " << y << endl;

    return 0;
}

void printSomething() {
    cout << "I work" << endl;
}

int myFunction() {
    printSomething();
    return 1;
}

int add2Numbers(int myX, int myY) {
    return myX + myY;
}

float add2Floats(float myX, float myY) {
    return myX + myY;
}