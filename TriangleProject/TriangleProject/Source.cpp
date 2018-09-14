#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include<stdlib.h>
using namespace std;
int rightTriangle() {
	int choice;
	int A;
	int B;
	int C;
	int perimeter;
	int missingsidechoice;
	int missingside;

	cout << "\nWhat you searching for 1 - Perimeter \n 2 - Missing Side ";
	cin >> choice;

	if (choice == 1) {
		cout << "Enter side A: ";
		cin >> A;
		cout << "Enter side B: ";
		cin >> B;
		cout << "Enter side C: ";
		cin >> C;

		perimeter = A + B + C;
		cout << "The perimeter is: " << perimeter << endl;
	}
	else if (choice == 2) {
		cout << "What side is \n1 - A \n2 - B \n3 - C ";
		cin >> missingsidechoice;

	}
	if (missingsidechoice == 1) {
		cout << "Enter side B: ";
		cin >> B;
		cout << "Enter side C: ";
		cin >> C;
		A = (B * B) - (C * C);
		missingside = A / A;
		cout << "The number for the missing side is: " << missingside << endl;
	}
	else if (missingsidechoice == 2) {
		cout << "Enter side A: ";
		cin >> A;
		cout << "Enter side C: ";
		cin >> C;
		B = (A * A) - (C * C);
		missingside = B / B;
		cout << "The number for the missing side is: " << missingside << endl;
	}
	else if (missingsidechoice == 3) {
	cout << "Enter side A: ";
	cin >> B;
	cout << "Enter side B: ";
	cin >> A;
	C = (A * A) + (B * B);
	missingside = C / C;
	cout << "The number for the missing side is: " << missingside << endl;

}

return 0;
}

int main() {

	int chooseTriangle;

	cout << "Welcome to the triangle calculator. " << endl;
	cout << "What type of triangle are you solving for?" << endl;
	cout << "1 - Right triangle\n2 - isosceles\n3 - equilateral";
	cin >> chooseTriangle;
	do {
		if (chooseTriangle == 1) {
			rightTriangle();

		}
		else if (chooseTriangle == 2) {
			//isosceles();
		}
		else if (chooseTriangle == 3) {
			//equalateral();
		}
		else
			cout << "That not a option";
	} while (chooseTriangle != 4);





	system("pause");
	return 0;

}