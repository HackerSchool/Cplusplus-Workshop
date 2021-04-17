#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int x = 0;

	cout << "Hello! I'm " << argv[0] << "!" << endl;

	cout << "The 4 numbers you gave me are: " << endl;
	for (int i = 1; i < 5; i++) {
		cout << argv[i] << endl;
		x += stoi(argv[i]);
	}
	
	cout << "And add to " << x << "!" << endl;
    return 0;
}

