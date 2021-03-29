//what happens when you comment this?
#include <iostream>
#include <string>

using namespace std;

struct Cat {
    string name;
    int age;

    Cat(): name("no name"), age(0) {}
    
    Cat(string dName, int dAge): name(dName),
        age(dAge) {}
};
int main() {
    Cat gato1 = Cat();
    Cat gato2 = Cat("1",-1);

    cout << gato1.name << " " << gato1.age << endl;
    cout << gato2.name << " " << gato2.age << endl;
    
    return 0;
}