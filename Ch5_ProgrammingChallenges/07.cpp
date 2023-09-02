// Written By: Brenda Luis
// Developed Using: Visual Studio 2022

/*
	07. PENNIES FOR PAY

	Write a program that calculates how much a person would earn over a period 
	of time if his or her salary is one penny on the first day and two pennies 
	the second day, and continues to double each day. The program should ask the
	user for the number of days. Display a table shwoing how much the salary was
	for each day, and then show the total pay at the end of the period. The output
	should be displayed in a dollar amount, not the number of pennies. 

	Input validation: Do not accept a number less than 1 for the days worked.

*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double pennies = 0.01;	// starting value
	double daily;			// daily total
	double total = 0;		// runing total

	int userDays;

	// explains program to user and prompts them to enter amount of days
	cout << "Input a number of days and I will tell you how much you would\n";
	cout << "earn if your pay started at 1 penny and doubled each day.\n";
	cout << "\nDays: ";
	cin >> userDays;
	

	// input validation for user input
	if (userDays < 1) {
		cout << "Invalid Input: Please select a number greater than 1.\n";
		return 0;
	}

	// table headings
	cout << "\nDays Worked" << "\t\t\t" << "Amount Earned" << endl;
	cout << "---------------------------------------------\n";

	// loop defined a counter (day) with limit of user selected days
	// counter (day) increments by one after each iteration
	for (int day = 1; day <= userDays; day++) {

		// running total
		total += pennies;

		// formatting output 
		cout << setw(5) << day << "\t\t\t" << setprecision(2) << fixed << setw(17) <<  pennies << endl;
		
		// doubles pennies value to be displayed on following iteration
		pennies = 2 * pennies;
	}

	// display running total over course of user selected days
	cout << "----------------------------------------------\n";
	cout << "\nYou would have earned $" << total << " over the course of " << userDays << " days.\n";

	return 0;
}