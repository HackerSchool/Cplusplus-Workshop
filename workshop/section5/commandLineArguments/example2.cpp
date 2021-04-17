#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int x = stoi(argv[1]);
	int y = stoi(argv[2]);
	
	cout << "Hello! I'm " << argv[0] << " and altough I've received " << argc << " arguments, the first 2 numbers you gave me add up to " << x + y << "!" << endl;
    return 0;
}

