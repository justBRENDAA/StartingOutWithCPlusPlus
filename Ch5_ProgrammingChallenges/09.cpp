// Written By: Brenda Luis
// Developed Using: Visual Studio 2022

/*

	09. HOTEL OCCUPANCY

	Write a program that calculates the occuplancy rate for a hotel. The 
	program should start by asking the user how many floors the hotel has. 
	A loop should then iterate once for each floor. In each iteration, the 
	loop should ask the user for the number of rooms on the floor and how 
	many of them are occupied. After all the iterations, the program should 
	display how many rooms the hotel has, how many of them are occupied,how 
	many are unoccupied, and the percentage of rooms that are occupied. The 
	percentage may be calculated by dividing the number of rooms occupied 
	by the number of rooms. 
	
	
	NOTE: It is traditional that most hotels do not have a thirteenth floor. 
	The loop in this program should skip the entire thirteenth iteration. 

	INPUT VALIDATION: Do not accept a value less than 1 for the number of floors.
	Do not accept a number less than 10 for the number of rooms on a floor. 
*/


#include <iostream> 
#include <iomanip>
using namespace std;
int main()
{
	// variables for user input
	int hotelFloors, roomsPerFloor, occupiedPerFloor;

	// percent symbol
	char percent = 37;

	// running totals
	int roomsTotal = 0, occupiedTotal = 0;
	
	cout << "How many floors does the hotel have? ";
	cin >> hotelFloors;
	cout << endl;


	// input validation: floors >= 1
	while (hotelFloors < 1) {
		cout << "Please enter a value greater than 0.\n";
		cin >> hotelFloors;
	}


	for (int floor = 1; floor <= hotelFloors; floor++) {

		// this if statement adds 1 to (floor) when it is equal to 13 in order to skip straight to floor 14
		// since we are essentially skipping a floor we have to add another one to hotel floors
		// if 1 is not added to hotel floors when floor number is greater than 13 iterations will always be 1 less than the actual floors
		if (floor == 13) {
			floor++;
			hotelFloors++;
		}

		// gets room per floor & keeps running total
		cout << "\nHow many rooms are in floor " << floor << "? ";
		cin >> roomsPerFloor;

		// input validation for rooms per floor
		while (roomsPerFloor < 10) {
			cout << "The number of rooms must be greater than or equal to 10: ";
			cin >> roomsPerFloor;
		}

		roomsTotal += roomsPerFloor;

		// gets occupied rooms per floor & keeps running total
		cout << "How many of those rooms are occupied? ";
		cin >> occupiedPerFloor;
		occupiedTotal += occupiedPerFloor;
		cout << endl;
	
	}

	// calculations to get unoccoupied and percentage of occupied rooms
	int unoccupied = roomsTotal - occupiedTotal;

	double percentOccupied = ((occupiedTotal * 1.0) / roomsTotal) * 100;


	// displays final results
	cout << "\nRooms In Hotel:" << setw(12) << roomsTotal << endl;
	cout << "Occupied Rooms:" << setw(12) <<occupiedTotal << endl;
	cout << "Unoccupied Rooms:" << setw(10) << unoccupied << endl;
	cout << "Percentage Occupied:" << setw(7) << percentOccupied << percent << endl;

	return 0;
}

