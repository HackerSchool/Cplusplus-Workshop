#include <iostream>
using namespace std;

int main() {

    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int x : arr) //this is a foreach loop  
        cout << x << " "; // it will loop through all of the contents in arr

    cout << endl;

    return 0;
}