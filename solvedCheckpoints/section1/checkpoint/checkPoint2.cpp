/*

Define 3 variables, x, y and z
X should be 1, Y should be 3.4 and Z should be -2
print the following and complete with the respective values
"
valor x: {x}
valor y: {y}
valor z: {z}
valor x + y + z: {x + y + z}
"

*/

#include <iostream>
using namespace std;

int main() {
    int x = 1;
    double y = 3.4f;
    int z = -2;

    cout << "valor x: {" << x << "}" << endl;
    cout << "valor y: {" << y << "}" << endl;
    cout << "valor z: {" << z << "}" << endl;

    cout << "valor x + y + z: {" << x + y + z << "}" << endl;

    return 0;
}
