/*

	05. BODY MASS INDEX

	Write a program that calculates and displays a person's
	body mass index (BMI). The BMI is often used to determine
	whether a person is overweight or underweight for his or 
	her height. A person's BMI is calculated with the following
	formula: 

	BMI = weight x 703 / height^2

	where weight is measured in pounds and height is measured in 
	inches. The program should display a message indicating whether 
	the person has optimal weight, is underweight, or is overweight. 
	A person's weight is considered to be optimal if his or her BMI 
	is between 18.5 and 25. If the BMI is less than 18.5, the person 
	is considered to be underweight. If the BMI value is greater 
	than 25, the person is considered to be overweight.
	
	*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double weight, height;

	cout << "This program can calculate your BMI.\n";
	cout << "\nGive me your weight in pounds: ";
	cin >> weight;

	if (weight > 0 && weight <= 2000)
	{
		cout << "\nGive me your height in inches: ";
		cin >> height;

		if (height > 0 && height <= 107)
		{
			double BMI = weight * 703 / pow(height, 2.0);

			cout << setprecision(2) << showpoint << fixed;

			if (BMI < 18.5)
			{
				cout << "\nYour BMI is: " << BMI << endl;
				cout << "\nYou are underweight.";
			}
			else if (BMI >= 18.5 && BMI <= 25)
			{
				cout << "\nYour BMI is: " << BMI << endl;
				cout << "\nYou are at the optimal weight.";
			}
			else if (BMI > 25)
			{
				cout << "\nYour BMI is: " << BMI << endl;
				cout << "\nYou are overweight." << endl;
			}
			else
				cout << "\nInvalid Input. Restart the program and try again.\n";
		}
		else
			cout << "\nPlease enter a valid height.";
	}
	else
		cout << "\nPlease enter a valid weight.";



	return 0;


}