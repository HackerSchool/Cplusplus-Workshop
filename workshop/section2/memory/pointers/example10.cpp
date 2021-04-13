#include <iostream>
using namespace std;

int main() {
    //int x = 5;
    int *xPointer = nullptr

    //string y = "ola";
    string *yPointer = nullptr

    //float z = 5.1f;
    float *zPointer = nullptr

    //does not work
    //float *xPointer2 = &x;
   
    //error. Nullptr does not have content
    //cout << "X is: " << *xPointer << endl;
    cout << "X memory position is: " << xPointer << endl;
    //error. Nullptr does not have content
    //cout << "Y is: " << *yPointer << endl;
    cout << "Y memory position is: " << yPointer << endl;
    //error. Nullptr does not have content
    //cout << "Z is: " << *zPointer << endl;
    cout << "Z memory position is: " << zPointer << endl;
   
    return 0;
}