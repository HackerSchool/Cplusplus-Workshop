/*

Build a program that reads an integer N from the terminal,
then reads N doubles from the terminal
and computes the average

Example:
{
    Insert number of elements(N): [Input]
    [Input1]
    [Input2]
    ...
    [InputN]
    The average is: {average}
}

*/
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Insert number of elements(N): ";
    cin >> n;
    
    double doubleArray[n];

    for(int i = 0; i < n; i++) {
        cin >> doubleArray[i];
    }
    
    double result = 0;
    for(int valueInArray : doubleArray) {
        result += valueInArray;
    }

    result = result / n;

    cout << result << endl;

    return 0;
}