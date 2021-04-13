#include <iostream>
using namespace std;

//review
int main() {
    // so the array should be initialized with the same value
    int size = 3;
    int array[size] = {1, 2, 3};

    // begining with the while...
    // double each element of the array
    int k = 0;
    while (k < 3) {
        array[k] = array[k];
        k++;
    }

    // a for cycle does exactly the same, bit in a more compacted way
    for (int i = 0; i < 3; i++) {
        array[i] = array[i] * 2;
    }

    // for (initialization; while-test; update-vars)
    // all parts are optional

    // print each element - seems the previous while cycle!
    int i = 0;
    for (; i < 3;) {
        cout << array[i] << " ";
        i++;
    }

    cout << endl;

    // hard-code the length of the array is a bad idea!
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << endl;

    // easier way to iterate an array? foreach!
    for (int element: array) {
        cout << element << " ";
    }

    cout << endl;

    // in each iteration, foreach copies the value of array[i] to element
    // so it works only for reading!

    for (int element: array) {
        element = 5;
    }

    for (int element: array) {
        cout << element << " ";
    }

    cout << endl;

    // we can write each position this way:
    for (int& element: array) {
        element = 5;
    }

    for (int element: array) {
        cout << element << " ";
    }

    cout << endl;
    
    return 0;
}