#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *xPointer = &x;

    string y = "ola";
    string *yPointer = &y;

    float z = 5.1f;
    float *zPointer = &z;

    //does not work
    //float *xPointer2 = &x;
   
    cout << "X is: " << x << endl;
    cout << "X memory position is: " << xPointer << endl;
    cout << "Y is: " << y << endl;
    cout << "Y memory position is: " << yPointer << endl;
    cout << "Z is: " << z << endl;
    cout << "Z memory position is: " << zPointer << endl;
   
    return 0;
}