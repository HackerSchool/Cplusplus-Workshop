/*

Write a program that reads a square 3x3 matrix and writes its diagonal
Usa fors!

Example: the matrix

| 1 2 3 |
| 4 5 6 |
| 7 8 9 |

$ ./a.out 
Enter matrix: 1 2 3 4 5 6 7 8 9
Diagonal: 1 5 9

*/
#include <iostream>
using namespace std;

int main() {
    int size = 3;
    int matrix[size][size];

    cout << "Insert matrix: \n";
    for(int i = 0; i < size; i++) {
        cout << "Line " << i << endl;
        for(int k = 0; k < size; k++) {
            cin >> matrix[i][k];
        }
    }
    
    cout << "Diagonal: " << endl;
    for(int i = 0; i < size; i++) {
        cout << matrix[i][i];
    }

    return 0;
}