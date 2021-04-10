#include <iostream>
using namespace std;

int main() {
    int var1 = 2147483647;
    int var2 = var1 + 1;

    unsigned int var3 = 1;
    unsigned int var4 = -1;

    cout << "var1: " << var1 << endl;
    cout << "var2: " << var2 << endl;
    cout << "var3: " << var3 << endl;
    cout << "var4: " << var4 << endl;

    return 0;
}