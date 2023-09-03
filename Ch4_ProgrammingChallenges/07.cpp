/*

	07. TIME CALCULATOR

	Write a program that asks the user to enter a number of seconds. 

	- There are 60 seconds in a minute. If the number of seconds entered
	  by the user is greater than or equal to 60, the program should display
	  the number of minutes in that many seconds.

	- There are 3,600 seconds in an hour. If the number of seconds entered by
	  the user is greater than or equal to 3,600, the program should display
	  the number of hours in that many seconds.

	- There are 86,400 seconds in a day. If the number of seconds entered by 
	  the user is greater than 86,400, the program should display the number
	  of days in that many seconds. 

*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double userSeconds, minutes, hours, days;

	cout << "Enter a number of seconds: ";
	cin >> userSeconds;


	//this is to make sure users input positive number of seconds
	if (userSeconds >= 0)
	{
		// this if else statement separates the users input into 
		// ranges of seconds
		if (userSeconds >= 60 && userSeconds < 3600)
		{
			// calculates and displays minutes
			minutes = userSeconds / 60;

			cout << "\nThere is " << minutes << " minute(s) in " << userSeconds << " seconds.\n";
		}
		else if (userSeconds >= 3600 && userSeconds <= 86400)
		{
			// calculates and displays hours
			hours = userSeconds / 3600;

			cout << "\nThere is " << hours << " hour(s) in " << userSeconds << " seconds.\n";
		}
		else if (userSeconds > 86400)
		{
			// calculates and displays days
			days = userSeconds / 86400;

			cout << "\nThere is " << days << " day(s) in " << userSeconds << "seconds.\n";
		}

	}
	else
		cout << "\nPlease enter a valid number of seconds." << endl;

	return 0;
}