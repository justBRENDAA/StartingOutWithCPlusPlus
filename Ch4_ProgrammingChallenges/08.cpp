/*

	08. COLOR MIXER

	The colors red, blue, and yellow are known as primary colors
	because they cannot be made by mixing other colors. When you
	mix two primary colors, you get a secondary color, as shown
	here:

	When you mix red and blue, you get purple.
	When you mix red and yellow, you get orange.
	When you mix blue and yellow, you get green.

	Write a program that prompts the user to enter the names of two 
	primary colors to mix. If the user enters anything other than
	"red," "blue," or "yellow," the program should display an error
	message. Otherwise, the program should display the name of the
	secondary color that results by mixing two primary colors.

*/



#include <iostream>
#include <string>
using namespace std;
int main()
{
	string r = "red",
		b = "blue", 
		y = "yellow", 
		userColor1, userColor2;

	cout << "Enter the names of two primary colors to mix.\n";
	cout << "\nEnter the first primary color: ";
	cin >> userColor1;
	cout << "\nEnter the second primary color: ";
	cin >> userColor2;

	// ensures user selected a primary color as first color
	if (userColor1 == r || userColor1 == b || userColor1 == y)
	{
		// ensures user selected a primary color as second color
		if (userColor2 == r || userColor2 == b || userColor2 == y)
		{
			// color mixing
			// wrote program in a == b OR b == a for each color selection combination
			if ((userColor1 == r && userColor2 == b) || (userColor1 == b && userColor2 == r))
				cout << "\nWhen you mix red and blue, you get purple!\n";

			else if ((userColor1 == r && userColor2 == y) || (userColor1 == y && userColor2 == r))
				cout << "\nWhen you mix red and yellow, you get orange!\n";

			else if ((userColor1 == b && userColor2 == y) || (userColor1 == y && userColor2 == b))
				cout << "\nWhen you mix blue and yellow, you get green!\n";
		}
		else
			cout << "You did NOT select a primary color!\n";
	}
	else
		cout << "You did NOT select a primary color!\n";
	

	// the issue with this code is that if I type RED then the program does not register it as a primary color

	return 0;

}


/*

these were the original statements I used but could not get them to work

i think it has to do with the NOT statements but I am not too sure 

						if (userColor1 != r || userColor1 != b || userColor1 != y)
								cout << "Error: You did NOT select a primary color.\n";
							else
							{
								if (userColor2 != r || userColor2 != b || userColor2 != y)
									cout << "Error: You did NOT select a primary color.\n";
								else
								{
this worked in updated code -->     if ((userColor1 == r && userColor2 == b) || (userColor1 == b && userColor2 == r))
										cout << "When you mix red and blue, you get purple!\n";

									else if ((userColor1 == r && userColor2 == y) || (userColor1 == y && userColor2 == r))
										cout << "When you mix red and yellow, you get orange!\n";

									else if ((userColor1 == b && userColor2 == y) || (userColor1 == y && userColor2 == b))
										cout << "When you mix blue and yellow, you get green!\n";
								}
							}



*/