#include <iostream>
#include <string>

using namespace std;

struct Cat {
    string name;
    int age;
};

int main() {
    Cat gato = Cat();
    gato.name = "1";
    gato.age = 32;

    cout << gato.name << " " << gato.age << endl;

    return 0;
}