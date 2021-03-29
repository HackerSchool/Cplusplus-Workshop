#include <iostream>
using namespace std;

int main() {
    //int x = 5;
    int *xPointer = new int(5);

    //string y = "ola";
    string *yPointer = new string("ola");

    //float z = 5.1f;
    float *zPointer = new float(5.1f);

    //does not work
    //float *xPointer2 = &x;
   
    cout << "X is: " << *xPointer << endl;
    cout << "X memory position is: " << xPointer << endl;
    cout << "Y is: " << *yPointer << endl;
    cout << "Y memory position is: " << yPointer << endl;
    cout << "Z is: " << *zPointer << endl;
    cout << "Z memory position is: " << zPointer << endl;
   
    return 0;
}