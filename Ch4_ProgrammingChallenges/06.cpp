/* 

	06. MASS AND WEIGHT

	Scientist measure an object's mass in kilograms and its weight in newtons.
	If you know the amount of mass that an object has, you can calculate its
	weight, in newtons, with the following formula:

	weight = mass x 9.8

	Write a program that asks the user to enter an object's mass, then calculates
	and displays its weight. If the object weighs more than 1,000 newtons, display
	a message indicating that it is too heavy. If the object weighs less than 10 
	newtons, display a message indicating that the object is too light. 

*/


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double mass;

	cout << " This program can calculate an object's weight when given the mass.\n";
	cout << "\nProvide the object's mass in kilograms: ";
	cin >> mass;

	if (mass >= 0)
	{
		double weight = mass * 9.8;

		if (weight > 1000)
		{
			cout << "\nThe object's weight is: " << weight << " newtons.\n";
			cout << "\nThe object is too heavy!\n";
		}
		else if (weight >= 10 && weight <= 1000)
			cout << "\nThe object's weight is: " << weight << " newtons.\n";
		else if (weight < 10)
		{
			cout << "\nThe object's weight is: " << weight << " newtons.\n";
			cout << "\nThe object is too light!";
		}
	}
	else
		cout << "\nPlease enter a valid mass.\n";

	return 0;

}