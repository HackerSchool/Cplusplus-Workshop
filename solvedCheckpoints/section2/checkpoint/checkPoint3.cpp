/*

Define the following functions:
double average ();
double average (int N);

The first one reads a number N from the terminal and then reads N doubles, to compute the average.
The second one does not need to read the N, as it is provided as argument.

The function "average()" should use "average(int N)"
*/
#include <iostream>
using namespace std;

double average();
double average(int N);

int main() {
    
    double result = average();

    cout << result << endl;

    return 0;
}

double average() {
    int n;

    cout << "Insert number of elements(N): ";
    cin >> n;

    return average(n);
}

double average(int n) {

    double doubleArray[n];

    for(int i = 0; i < n; i++) {
        cin >> doubleArray[i];
    }
    
    double result = 0;
    for(int valueInArray : doubleArray) {
        result += valueInArray;
    }

    return result / n;
}