#include <iostream>
using namespace std;

void main() {
    int yarray[] = {1, 2, 3};
    string sarray[] = {"1","ola", "3"};

    cout << yarray << endl;
    cout << sarray << endl;

    yarray[0] = 3;

    cout << yarray << endl;
    cout << yarray[1] << endl;
}

void myFunction() {
    cout << "I work" << endl;
}