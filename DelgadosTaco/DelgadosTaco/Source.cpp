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

	if (input == "Taco") {
		cout << "How many tacos would you like: ";
		cin >> tacoOrder;
	}
	else if (input == "burrito") {
		cout << "How many burritos would you like: ";
		cin >> burritosOrder;
	}
	else if (input == "drink") {
		cout << "How many drink would you like: ";
		cin >> drinkOrder;
	}
	else if (input == "bean") {
		cout << "How many bowls of beans would you like: ";
		cin >> beansOrder;
	}
	else if (input == "tostada") {
		cout << "How many tostadas would you like: ";
		cin >> tostadasOrder;
	}


	

	


	

}