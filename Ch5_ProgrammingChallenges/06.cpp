// Written By: Brenda Luis
// Developed Using: Visual Studio 2022

/*
	06. DISTANCE TRAVELLED

	The distance a vehicle travels can be calculated as follows:

	distance = speed x time

	Write a program that asks the user for the speed of a vehicle (in miles per hour)
	and how many hours it has travelled. The program should then use a loop to display
	the distance the vehicle has traveled for each hour of that time period. Here is 
	an example of the output:

		What is the speed of the vehicle in mph? 40
		How many hours has it traveled? 3
		Hour      Distance Travelled
		---------------------------
		1			40
		2			80
		3			120

	Input Validations: Do not accept a negative number for speed and do not accept any 
	value less than 1 for the time travelled. 
	
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double timeTraveled, speed, distance;

	// counter
	double hour; 

	// user input on speed of vehicle and input validation
	cout << "What is the speed of the vehicle in mph? ";
	cin >> speed;

	if (speed < 0) {
		cout << "\nPlease input a positive value.\n";
		return 0;
	}

	// user input of hours travelled and input validation 
	cout << "\nHow many hours has the vehicle travelled? ";
	cin >> timeTraveled;

	if (timeTraveled < 1) {
		cout << "\nPlease input a value greater than 1.\n";
		return 0;
	}

	// table labels
	cout << "\n Hour" << "\t\t" << "Distance Travelled" << endl;
	cout << "-----------------------------------------\n";

	// loop  to display distance travelled per hour
	for (hour = 1; hour <= timeTraveled; hour++) {
		distance = speed * hour;
		cout << setw(3) << hour << "\t\t\t";
		cout << distance << endl;
	}

	return 0;	
}


