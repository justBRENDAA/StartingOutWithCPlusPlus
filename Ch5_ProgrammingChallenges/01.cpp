// Written By: Brenda Luis
// Developed Using: Visual Studio 2022

/*

	01. SUM OF NUMBERS

	Write a program that asks for the user for a positive integer value. The program
	should use a loop to get the sum of all the integers from 1 up to the number 
	entered. For example, if the user enters 50, the loop will find the sum of 1, 2, 
	3, 4, ... , 50.

	Input validation: Do not accept a negative starting number

*/


#include <iostream>
using namespace std;
int main()
{
	int userNum;		// user input
	int total = 0;		// running total
	int count;			// counter 


	cout << "Enter a positive integer value: ";
		cin >> userNum;

	// if statement ensures user input is a non negative value
	if (userNum < 0)
		cout << "\nPlease enter a positive integer value.\n";
	else
	{
		for (count = 1; count <= userNum; count++)
			total += count;

		cout << "\nThe sum of numbers 1 - " << userNum << " is: " << total << endl;

		return 0;
	}
}