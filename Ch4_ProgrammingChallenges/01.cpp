/* 

	01. MINIMUM/MAXIMUM

	Write a program that asks the user to enter two numbers. 
	The program should use the conditional operator to 
	determine which number is the smaller and which is 
	larger.

*/

#include <iostream>
using namespace std;
int main()
{
	int num1, num2;

	cout << "Input two numbers separted by a space and I\n"
		<< "will tell you which number is the smaller and\n"
		<< "which is the larger.\n";
	cin >> num1 >> num2;

	cout << endl;

	(num1 > num2) ? cout << num1 << " is larger than " << num2 : cout << num2 << " is larger than " << num1;
	
	return 0;
}