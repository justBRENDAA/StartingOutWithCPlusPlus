// Written By: Brenda Luis
// Developed Using: Visual Studio 2022

/*

	04. CALORIES BURNED

	Running on a particular treadmill you burn 3.6 calories
	per minute. Write a program that uses a loop to display
	the number of calories burned after 5, 10, 15, 20, 25, 
	and 30 minutes. 

*/



#include <iostream> 
using namespace std;
int main()
{
	// constant for calories burned per minute
	const double CALORIES_PER_MINUTE = 3.6;

	int mins;			// counter
	double totalCal;	// running total

	// table labels
	cout << "  Minutes" << "\t\t" << "Calories Burned\n";
	cout << "---------------------------------------\n";


	// for loop : starts at 5, increments by 5 after each iteration
	for (mins = 5; mins <= 30; mins += 5) {

		//calculates total calories
		totalCal = mins * CALORIES_PER_MINUTE;

		// displays minutes and total calories burned
		cout << "    " << mins << "\t\t\t\t" << totalCal << endl;
	}

	return 0;

}