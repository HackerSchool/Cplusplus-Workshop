#include <iostream>
using namespace std;

int main() {

    int arr[10] = {50, 1, 2, 3, 40, 5, 6, 7, 8, 9};
    
    //this is a foreach loop  
    for (int x : arr) 
        // it will loop through all of the contents in arr
        cout << x << " "; 

    cout << endl;

    return 0;
}