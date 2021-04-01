//what happens when you comment this?
#include <iostream>
#include <string>

using namespace std;

class Cat {
    public:
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