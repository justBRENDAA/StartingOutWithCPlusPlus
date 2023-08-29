/*

	03. MAGIC DATES

	The date June 10, 1960 is special because when we write
	it in the following format, the month times the day 
	equals the year. 

	6/10/60

	Write a program that asks the user to enter a month (in
	numeric form), a day, and a two-digit year. The program 
	should then determine whether the month times the day
	is equal to the year. If so, it should display a message 
	saying the date is magic. Otherwise, it should display
	a message saying the date is not magic.

*/

#include <iostream>
using namespace std;
int main()
{
	int month, date, year, product;

	cout << "Enter a month (in numeric form): ";
	cin >> month;

	// ensures they pick one of the 12 months of the year
	if (month >= 1 && month <= 12)
	{
		cout << "\nEnter a date: ";
		cin >> date;

		// ensures they pick dates between 1-31
		if (date >= 1 && date <= 31)
		{
			cout << "\nEnter a two digit year: ";
			cin >> year;

			// ensures user inputs two digit year
			if (year >= 00 && year <= 99)
			{
				product = month * date;

				// determines if product == year (magic number)
				if (product == year)
					cout << "\nYour date is MAGIC!";
				else
					cout << "\nYour date is NOT magic.";
			}
			else
				cout << "\nPlease pick a year between 00-99.";

		}
		else
			cout << "\nPlease pick a date between 1-31.";
	}
	else
		cout << "\nPlease pick a month between 1-12.";




}

	
/*
	cout << "\nEnter a date: ";
	cin >> date;

	cout << "\nEnter a two digit year: ";
	cin >> year;

*/