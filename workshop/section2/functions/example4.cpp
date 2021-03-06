#include <iostream>
using namespace std;

void printThings(int myX, int myY);
void printThings(int myX, int myY, int myZ);
int add2Numbers(int myX, int myY = 1);

int main() {
    
    int x = add2Numbers(1);
    int y = add2Numbers(x, 4);

    cout << "My X is: " << x << endl;
    cout << "My Y is: " << y << endl;

    printThings(x,y);
    
    printThings(x,y,1);

    return 0;
}

void printThings(int myX, int myY) {
    cout << myX << myY << endl;
}

void printThings(int myX, int myY, int myZ) {
    cout << myX << myY << myZ << endl;
}

int add2Numbers(int myX, int myY) {
    return myX + myY;
}