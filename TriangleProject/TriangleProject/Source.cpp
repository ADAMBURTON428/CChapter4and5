#include <iostream>
#include <string>
using namespace std;

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
			isosceles();
		}
		else if (chooseTriangle == 3) {
			equalateral();
		}
		else
			cout << "That not a option";
	} while (chooseTriangle != 4);





	system("pause");
	return 0;

}