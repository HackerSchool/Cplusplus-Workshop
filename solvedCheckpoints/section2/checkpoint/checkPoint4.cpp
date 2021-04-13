/*

Complete the following code:


*/
#include <iostream>
using namespace std;

void set_head(int array[], int new_head);

int main() {
    int size = 3;
    int array[size] = {1, 2, 3};
    set_head(array, 4);

    cout << "array is now: " << endl;

    
    for(int i = 0; i < size; i++) {
        if( i == size) {
            cout << array[i] << endl;
        }
        else {
            cout << array[i] << ", " << endl;
        }
    }

    return 0;
}

void set_head(int array[], int new_head) {
    *array = new_head;
}

/*

Write the function 
void set_head (int array[], int new_head)

That receives an array and changes the first element.
You cannot use the [] operator. 
array[0] is then not possible

Hint: use pointers!
Hint: 4, 2, 3, is not a valid solution!

Example:
array is now: 
4, 2, 3

*/