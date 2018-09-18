#include <iostream>
#include <string>
using namespace std;

int main()
{
	int input;
	double  tacoTotal;
	double  burritosTotal;
	double  beansTotal;
	double tostadasTotal;
	double  drinkTotal;
	int tacoOrder = 0;
	int burritosOrder=0;
	int beansOrder = 0;
	int tostadasOrder = 0;
	int drinkOrder = 0;
	double Total;
	do{
		cout << "What would you like to order? \n1- Taco \n2- Burritos \n3- Drink \n4- Beans \n5- Tostadas";
		cin >> input;

		if (input == 1) 
		{
			cout << "How many tacos would you like: ";
			cin >> tacoOrder;
			input = 0;
		}
		else if (input == 2) 
		{
			cout << "How many burritos would you like: ";
			cin >> burritosOrder;
			input = 0;
		}
		else if (input == 3) 
		{
			cout << "How many drink would you like: ";
			cin >> drinkOrder;
			input = 0;
		}
		else if (input == 4) 
		{
			cout << "How many bowls of beans would you like: ";
			cin >> beansOrder;
			input = 0;

		}
		else if (input == 5)
		{
			cout << "How many tostadas would you like: ";
			cin >> tostadasOrder;
			input = 0;
		}
	}while (input != 6);

	tacoTotal = 2.00 * tacoOrder;
	burritosTotal = 2.25 * burritosOrder;
	drinkTotal = 1.50 * drinkOrder;
	beansTotal = 1.00 * beansOrder;
	tostadasTotal = 2.50 * tostadasOrder;

	Total = tostadasTotal + beansTotal + drinkTotal + tacoTotal + burritosTotal;
	

	cout << "Your total is: " << Total << endl;




	

	

	system("pause");

	return 0;
	

}