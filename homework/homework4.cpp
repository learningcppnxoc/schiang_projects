#include <iostream>
#include <string>

using namespace std;

void question1();
void question7();
void question8();

int main() {
	//question1();
	//question7();
	question8();
	return 0;
}




void question1() {
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	const string greeting = "Hello, " + name + "!";
	// const std::string spaces(greeting.size(), ' ');
	const int pad = 1;
	const int rows = pad * 2 + 3;
	const int cols = greeting.size() + pad * 2 + 2;
	cout << endl;

	for (int r = 0; r != rows; ++r) {
		for (int c = 0; c != cols; ++c) {
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size() - 1;
			}
			else {
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
		}
		cout << endl;
	}
	
}


void question7() {
	for (int i = 10; i > -6; i--) {
		//cout << i << endl;
		printf("%d \n", i);
	}
}

void question8() {
	double multiple = 1;
	for (int i = 1; i <= 10; i++) {
		multiple *= i;
		cout << multiple << endl;
	}
}
