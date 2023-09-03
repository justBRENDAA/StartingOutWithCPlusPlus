/*

	09. CHANGE FOR A DOLLAR GAME

	Create a change-counting game that gets the user to enter
	the number of coins required to make exactly one dollar.
	The program should ask the user to enter the number of 
	pennies, nickels, dimes, and quarters. If the total value
	of the coins entered is equal to one dollar, the program 
	should congratulate the user for winning the game. Otherwise,
	the program should display a message indicating whether the 
	amount was more than or less than one dollar.

*/


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int pennies, nickels, dimes, quarters;
	double penniesTotal, nickelsTotal, dimesTotal, quartersTotal, coinsTotal;


	cout << "Enter a quantity of coins needed to make EXACTLY one dollar.\n";

	cout << "\nEnter the amount of pennies: ";
	cin >> pennies;
	
	// ensures user enters amount of pennies greater than or equal to zero
	if (pennies < 0)
		cout << "\nAmount of pennies must be greater than or equal to zero!";
	else
	{
		penniesTotal = pennies * 0.01;

		cout << "\nEnter the amount of nickels: ";
		cin >> nickels;

		// ensures user enters amount of nickels greater than or equal to zero
		if (nickels < 0)
			cout << "\nAmount of nickels must be greater than or equal to zero!";
		else
		{
			nickelsTotal = nickels * 0.05;

			cout << "\nEnter the amount of dimes: ";
			cin >> dimes;


			// ensures user enters amount of dimes greater than or equal to zero
			if (dimes < 0)
				cout << "\nAmount of dimes must be greater than or equal to zero!";
			else
			{
				dimesTotal = dimes * 0.10;

				cout << "\nEnter the amount of quarters: ";
				cin >> quarters;

				// ensures user enter amount of quarters greater than or equal to zero
				if (quarters < 0)
					cout << "\nAmount of quarters must be greater than or equal to zero!";
				else
				{
					quartersTotal = quarters * 0.25;

					// adds all coins together
					coinsTotal = penniesTotal + nickelsTotal + dimesTotal + quartersTotal;

					// identifies if coins are less than, greater than, or equal to $1.00
					if (coinsTotal == 1.00)
						cout << "\nCONGRATULATIONS!\n" << "Your selection of coins adds up to $1.00.\n";
					else if (coinsTotal < 1.00)
					{
						cout << "\nGAME OVER!\n";
						cout << "Your selection of coins was less than $1.00.\n";
					}
					// this last statement MUST be coinsTotal > 1.00
					else
					{
						cout << "\nGAME OVER!\n";
						cout << "Your selection of coins was more than $1.00.\n";
					}
				}
			}
		}
	}

	return 0;

}




