// Written By: Brenda Luis
// Developed Using: Visual Studio 2022

/*

	03. OCEAN LEVELS

	Assuming the ocean's level is currently rising at about 1.5 millimeters
	per year, write a program that displays a table showing the number of 
	millimeters that the ocean will have risen each year for the next 25
	years.

*/


#include <iostream>
using namespace std;
int main()
{
	// constant for yearly change in oceal level (mm)
	const double YEARLY_RISE = 1.5;
	

	// table labels
	cout << "Years \t\tChange Per Year\n";
	cout << "---------------------------------\n";

	int years;				// counter
	double changePerYear;	// total change in x number of years

		for (years = 1; years <= 25; years++) {
			changePerYear = years * YEARLY_RISE;
			cout << "\nYear " << years << "\t\t" << changePerYear << " millimeters" << endl;
		}
	return 0;
}