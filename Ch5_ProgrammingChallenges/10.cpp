// Written By: Brenda Luis
// Developed Using: Visual Studio 2022

/*

	10. AVERAGE RAINFALL	

	Write a program that uses nested loops to collect data and calculate the 
	average rainfall over a period of years. The program should first ask for
	the number of years. The outer loop will iterate once for each year. The 
	inner loop will iterate 12 times, once for each month. Each iteration of
	the inner loop will ask the user for the inches of rainfall for that month.

	After all iterations, the program should display the number of months, the 
	total inches of rainfall, and the average rainfall per month for the entire
	period. 

	INPUT VALIDATION: Do not accept a number less than 1 for the number of years. 
	Do not accept negative number for the monthly rainfall. 

*/

#include <iostream>
#include <iomanip>
using namespace std; 
int main()
{
	// user defined variables
	int userYears, monthlyRain;

	// running totals
	int totalMonths = 0, totalRain = 0;

	cout << "How many years? ";
	cin >> userYears;
	

	// input validation for number of years
	while (userYears < 1) {
		cout << "\nThe number of years must be at least 1. ";
		cin >> userYears;
		cout << endl;
	}

	// outer loop that reapeats for the amount of years
	for (int year = 1; year <= userYears; year++) {
		
		cout << endl;
		cout << "Monthly Rainfall for Year: " << year << endl;

		// inner loop repeats 12 times once for each month of the year
		for (int month = 1; month <= 12; month++) {
			cout << "Month " << month << ": ";
			cin >> monthlyRain;

			// running total of months
			totalMonths++;

			// input validaion for rainfall
			while (monthlyRain < 0) {
				cout << "\nThe amount of rain must be at least 0. ";
				cin >> monthlyRain;
			}
			
			// running total of rain
			totalRain += monthlyRain;
		}
	}
	// calculations for average rainfall
	double averageRainfall = (totalRain * 1.0) / totalMonths;

	// displays results
	cout << "\nTotal Months: " << totalMonths;
	cout << "\nTotal Rain: " << totalRain;
	cout << "\n\nThe average rainfall was " << averageRainfall << " inches per month.\n";



}