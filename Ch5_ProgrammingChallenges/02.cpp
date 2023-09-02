// Written By: Brenda Luis
// Developed Using: Visual Studio 2022

/*

	02. CHARACTERS FOR THE ASCII CODES

	Write a program that uses a loop to display the characters for the ASCII 
	codes 0 through 127. Display 16 characters on each line. 

*/

#include <iostream>
using namespace std;
int main()
{
	int count;
	char ascii;

	for (count = 0; count <= 127; count++) {
		ascii = count;
		cout << ascii << " ";

		if (count % 16 == 0)
			cout << endl;
	}
	return 0;
}