// Written By: Brenda Luis
// Developed Using: Visual Studio 2022

/*

	05. MEMBERSHIP FEES INCREASE

	A country club, which currently charges $2,500 per year for membership,
	has announced it will increase its membership fee by 4 percent each 
	year for the next 6 years. Write a program that uses a loop to display
	the projected rates for the next 6 years. 

*/ 


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const double PERCENT_INCREASE = .04;

	int year;		// counter
	double membership = 2500.00;

	cout << "  Year" << "\t\t\t" << " Rate\n";
	cout << "----------------------------------\n";

	for (year = 1; year <= 6; year++) {
		membership += (membership * PERCENT_INCREASE);
		cout << "\n" << setw(4) << year << "\t\t\t";
		cout << "$" << showpoint << setprecision(2) << fixed << membership << endl;
	}

	return 0;
}