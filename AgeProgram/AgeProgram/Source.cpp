#include <iostream>
#include <string>
using namespace std;

int main()
{

	string college;
	int age;
	string stringAnswer;

	cout << "What is your age? >>>";
	cin >> age;

	if (age > 0 && age <= 12) {
		stringAnswer = "You are a minor";
	}
	else if (age <= 0) {
		stringAnswer = "How did you get here";
	}
	else if (age > 13 && age <= 18) {

		stringAnswer = "You are a thing, good job";
	}
	else if (age > 18 && age <= 25) {

		cout << "Did you go to college? Yes or No >>>";
		cin >> college;
		if (college == "Yes") {
			stringAnswer = "Im Broke!";
		}
		else {
			stringAnswer = "I wish i went to college";
		}
	}
	else if (age > 26 && age <= 30) {
		stringAnswer = "Your getting old";
	}
	else if (age > 31 && age <= 40) {
		stringAnswer = "Why are you here?";
	}
	else if (age > 41 && age <= 50) {
		stringAnswer = "You are old, nice";
	}

	else if (age >51 && age <=75 ) {
		stringAnswer = "Time flies by right";
	}
	else if (age > 75) {
		stringAnswer = "Your still here thats good for you";
	}
	cout << stringAnswer << endl;


	system("pause");

	return 0;


}