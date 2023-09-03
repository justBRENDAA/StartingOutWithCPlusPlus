// Written By: Brenda Luis
// Developed Using: Visual Studio 2022

/*

	08. MATH TUTOR

	This program started in Programming Challenge 17, of Chapter 3, and was modified
	in Programming Challenge 11 of Chapter 4. Modify the program again so it displays
	a menu allowing the user to select an addition, subtraction, multiplication, or 
	division problem. The final selection on the menu should let the user quit the 
	program. After the user has finisehd the math problem, the program should display 
	the menu again. This process is repeated until the user chooses to quit the program.

	Input Validation: If the user selects an item not on the menu, display an error 
	message and display the menu again

*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
	int choice; // hold user choice
	int add, subtract, divide, multiply;

	// seeded random numbers
	unsigned seed = time(0);
	srand(seed);


	// division symbol 
	char divisionSymbol = 246;

	// constants for min and max random values
	const int MIN_VALUE = 1,
		MAX_VALUE = 100;

	// Constants for menu choices
	const int ADDITION = 1,
		SUBTRACION = 2,
		MULTIPLICATION = 3,
		DIVISION = 4,
		QUIT_CHOICE = 5;


	do {
		// display menu
		cout << "\tMath Problem Selection Menu\n\n"
			<< "1. Addition Problem\n"
			<< "2. Subtraction Problem\n"
			<< "3. Multiplication Problem\n"
			<< "4. Division Problem\n"
			<< "5. Quit the program\n\n"
			<< "Enter your choice: ";
		cin >> choice;
		cout << endl;

		// validate user choice
		while (choice < ADDITION || choice > QUIT_CHOICE) {
			cout << "Please enter a valid menu choice: ";
			cin >> choice;
			cout << endl;
		}
		
		int val1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE,
			val2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;


		// process user choice
		if (choice == ADDITION) {
			cout << "Hit ENTER to see the answer.\n\n";
			cout << setw(6) << val1 << endl;
			cin.get();
			cout << "+" << setw(5) << val2 << endl;
			cout << "  -----";
			cin.get();

			add = val1 + val2;
			cout << setw(6) << add << endl;
			cout << endl;
			cout << endl;
		}
		else if (choice == SUBTRACION) {
			cout << "Hit ENTER to see the answer.\n\n";
			cout << setw(6) << val1 << endl;
			cin.get();
			cout << "-" << setw(5) << val2 << endl;
			cout << "  -----";
			cin.get();

			subtract = val1 - val2;
			cout << setw(6) << subtract << endl;
			cout << endl;
			cout << endl;
		}
		else if (choice == MULTIPLICATION) {
			cout << "Hit enter to see the answer.\n\n";
			cout << setw(6) << val1 << endl;
			cin.get();
			cout << "x" << setw(5) << val2 << endl;
			cout << "  -----";
			cin.get();

			multiply = val1 * val2;
			cout << setw(6) << multiply << endl;
			cout << endl;
			cout << endl;
		}

		// division section has issues
		// will come back at a later time to fix
		// everything else works fine

		else if (choice == DIVISION){
			cout << "Hit enter to see the answer.\n\n";
			cout << setw(6) << val1 << endl;
			cin.get();
			cout << divisionSymbol << setw(5) << val2 << endl;
			cout << "  -----";
			cin.get();

			divide = val1 / val2;
			cout << setw(6) << divide << endl;
			cout << endl;
			cout << endl;
		}


	} while (choice != QUIT_CHOICE);
}