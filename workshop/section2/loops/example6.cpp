#include <iostream>
using namespace std;

//explain for and foreach here also for of for

void myFunction();

int main() {
    int array[] = {1, 2, 3};

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
    // we can compute the number of elements of an array in a very easy way
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << endl;

    // and what about an easier way to iterate an array? foreach!
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

    // we can write each position thi way:
    for (int& element: array) {
        element = 5;
    }

    for (int element: array) {
        cout << element << " ";
    }

    cout << endl;
    
    return 0;
}

void myFunction() {
    cout << "I work" << endl;
}