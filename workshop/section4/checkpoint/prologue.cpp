//what happens when you comment this?
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> intArray = {1,2,3};
    intArray.push_back(6);
    intArray.pop_back();
    vector<int> otherArray = vector<int>(intArray);
    
    return 0;
}