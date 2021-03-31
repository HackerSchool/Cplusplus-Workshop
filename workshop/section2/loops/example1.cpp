#include <iostream>
using namespace std;

int main() {

    int arr[10];

    for (int i = 0; i < 10; i++){ // starts on i = 0, goes up by one every time and ends on i = 9
        arr[i] = i;              // if we were to do for(int i = 0; i <= 10; i++) we'd have a seg fault
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}