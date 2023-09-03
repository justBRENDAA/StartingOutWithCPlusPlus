/*

	02. ROMAN NUMERAL CONVERTER

	Write a program that asks the user to enter a 
	number within the range of 1 through 10. Use
	a switch statement to display the Roman numeral 
	version of that number.

	Input validation: Do not accept a number less 
	than 1 or greater than 10.

*/


#include <iostream> 
using namespace std;
int main()
{
	int x;

	cout << "Type a number between 1 and 10 and I will show you\n"
		<< "the corresponding Roman numeral.\n";
	cin >> x;

	switch (x)
	{
		case 1: cout << "The Roman numeral for 1 is: I\n";
			break;
		case 2: cout << "The Roman numeral for 2 is: II\n";
			break;
		case 3: cout << "The Roman numeral for 3 is: III\n";
			break;
		case 4: cout << "The Roman numeral for 4 is: IV\n";
			break;
		case 5: cout << "The Roman numeral for 5 is: V\n";
			break;
		case 6: cout << "The Roman numeral for 6 is: VI\n";
			break;
		case 7: cout << "The Roman numeral for 7 is: VII\n";
			break;
		case 8: cout << "The Roman numeral for 8 is: VIII\n";
			break;
		case 9: cout << "The Roman numeral for 9 is: IX\n";
			break;
		case 10: cout << "The Roman numeral for 10 is: X\n";
			break;
		default: cout << "You did not enter a number between 1-10!\n";
	}
	return 0;
}