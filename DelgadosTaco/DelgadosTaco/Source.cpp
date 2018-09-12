#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	int tacoTotal;
	int burritosTotal;
	int beansTotal;
	int tostadasTotal;
	int drinkTotal;
	int tacoOrder;
	int burritosOrder;
	int beansOrder;
	int tostadasOrder;
	int drinkOrder;
	double Total;
	
	cout << "What would you like to order?";
	cin >> input;

	if (input == "Tacos") {
		cout << "How many tacos would you like: ";
		cin >> tacoOrder;
	}
	else if (input == "burritos") {
		cout << "How many burritos would you like: ";
		cin >> burritosOrder;
	}
	else if (input == "drink") {
		cout << "How many burritos would you like: ";
		cin >> drinkOrder;
	}


	

	


	

}