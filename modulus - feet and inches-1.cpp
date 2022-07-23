/*
Write a program that reads total number of inches and prints it in feet and inches.
Example:
Enter inches:  75
75 = 6 feet and 3 inches.
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int input_inches, output_inches, output_feet;

	cout << "Enter inches to convert: ";
	cin >> input_inches;

	output_feet = input_inches / 12;
	output_inches = input_inches % 12;

	cout << endl << input_inches << " inches = " 
		 << output_feet << " feet and " << output_inches << " inches.\n";

	cout << "\nPress any key to continue.";
	_getch();
	return 0;
}