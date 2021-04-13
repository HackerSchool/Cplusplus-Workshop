/*

Define 3 variables, x, y and z
X should be 1, Y should be 3.4 and Z should be -2
print the following and complete with the respective values
{algo que introduzi} should come from the user input

"
{algo que introduzi} x:
{algo que introduzi} y: 
{algo que introduzi} z: 
{algo que introduzi} x + y + z: 
"

*/
#include <iostream>
using namespace std;

int main() {

    int x = 1;
    float y = 3.4f;
    int z = -2;

    string inputString;
    cin >> inputString;

    cout << inputString << x << endl;
    cout << inputString << y << endl;
    cout << inputString << z << endl;

    cout << inputString << x + y + z << endl;

    return 0;
}