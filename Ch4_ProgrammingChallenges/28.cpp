/*

	28. RESTAURANT SELECTOR

	You have a group of friends coming to visit for your high school reunion, and you
	want to take them out to eat at a local restaurant. You aren't sure if any of them 
	have dietary restrictions, but your restaurant choices are as follows:

		Joe's Gourmet Burgers - Vegetarian: No, Vegan: No, Gluten-Free: No
		Main Street Pizza Company - Vegetarian: Yes, Vegan: No, Gluten-Free: Yes
		Corner Cafe - Vegetarian: Yes, Vegan: Yes, Gluten-Free: Yes
		Mama's Fine Italian - Vegetarian: Yes, Vegan: No, Gluten-Free: No
		The Chef's Kitchen - Vegetarian: Yes, Vegan: Yes, Gluten-Free: Yes

	Write a program that asks whether any members of your party are vegetarian, vegan,
	or gluten-free, then displays only the restaurants that you may take the group to. 
	Here is an example of the programs output:

		Is anyone in your party a vegetarian? yes
		Is anyone in your party a vegan? no
		Is anyone in your party gluten-free? yes
		Here are your restaurant choices:
			Main Street Pizza Company
			Corner Cafe
			The Chef's Kitchen

*/


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{

	// boolean variables to make them either true or false
	char vegetarian, vegan, gluten;

	// string for restaurant names
	string joe = "     Joe's Gourmet Burgers", 
		main = "     Main Street Pizza Company",
		corner = "     Corner Cafe",
		mama = "     Mama's Fine Italian",
		chef = "     The Chef's Kitchen";


	cout << "Is anyone in your party a vegetarian? ";
	cin >> vegetarian;

	cout << "\nIs anyone in your party a vegan? ";
	cin >> vegan;

	cout << "\nIs anyone in your party gluten-free? ";
	cin >> gluten;

	cout << "\nHere are your restaurant choices:\n";
	


	if (vegetarian == 'y' && gluten == 'y' && vegan == 'y') {
		cout << corner << endl;
		cout << chef << endl;
	}
	else if (vegetarian == 'y') {
		cout << main << endl;
		cout << corner << endl;
		cout << corner << endl;
		cout << chef << endl;
	}
	else if (vegan == 'y') {
		cout << corner << endl;
		cout << chef << endl;
	}
	else if (gluten == 'y') {
		cout << main << endl;
		cout << corner << endl;
		cout << chef << endl;
	}
	// this implies that they can go to any because there is no dietary restrictions
	else {
		cout << joe << endl;
		cout << main << endl;
		cout << corner << endl;
		cout << mama << endl;
		cout << chef << endl;
	}
}