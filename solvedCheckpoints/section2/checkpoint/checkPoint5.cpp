/*

Complete the following code:


*/
#include <iostream>
using namespace std;

int main () {
    int n = 1;
    int* pointer_to_int = &n;
    int** pointer_to_pointer_to_int = &pointer_to_int;

    /* You want to print the value of n by using pointer_to_pointer_to_int. Complete the line:*/
    cout << **pointer_to_pointer_to_int << endl;
}