#include <iostream>
#include <string>

using namespace std;

void question4();
void question5();
void question7();
void question8();
void question9();

int main() {
	//question4();
	question5();
	//question7();
	//question8();
	//question9();
	return 0;
}



void question4() {
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	const string greeting = "Hello, " + name + "!";
	const int pad = 1;
	const int rows = pad * 2 + 3;
	const int cols = greeting.size() + pad * 2 + 2;
	cout << endl;

	int middle = rows - pad - 1;

	for (int i = 1; i <= rows; i++) {
		if (i == 1 || i == rows){
			cout << string(cols, '*') << endl;
		}
		else if (i == middle) {
			cout << ('*') << string(pad, ' ')<< greeting  << string(pad, ' ') << ('*') << endl;
		}
		else {
			cout << ('*') << string((cols-2), ' ') << ('*') << endl;
		}
	}
}

void question5() {
	int height = 4;
	int width = 5;

	//square
		for (int i = 0; i < height; i++) {
			cout << string(height, '*') << endl;
	}

	//rectangle
		for (int i = 0; i < height; i++) {
			cout << string(width, '*') << endl;
		}

	//triangle
		for (int i = 0; i < width; i++) {
			cout << string(i, ' ');
			int astr = i * 2;
			int subtract = width - astr;
			cout << string(subtract, '*') << endl;
	}

}

void question7() {
	for (int i = 10; i > -6; i--) {
		//cout << i << endl;
		printf("%d \n", i);
	}
}

void question8() {
	int multiple = 1;
	for (int i = 1; i <= 10; i++) {
		multiple *= i;
		cout << multiple << endl;
	}
}

void question9() {
	int firstint;
	int secondint;
	cout << "Enter first number:";
	cin >> firstint;
	cout << "Enter second number:";
	cin >> secondint;
	//double <15 float <7
	if (firstint > secondint) {
		cout << firstint << " is larger";
	}
	else if (secondint < firstint) {
		cout << secondint << " is larger";
	}
	else if (secondint == firstint) {
		cout << "they equal";
	}


}
