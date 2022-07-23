/*
Write a program that generates and prints a randomly generated 10 character password to be texted to the 
user for verification. The program must generate and print a letter between 'A' and 'Z' or between 'a' and 
'z' or between 0 and 9 a total of 10 times. The selection between uppercase and lowercase letters or 
integers 0-9 should also be made randomly.
Example:
CzbM97x48N
Press any key to continue.
*/
#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;
int main()
{
	int what_to_print; 
	//randomly decides which group of uppercase letters, lowercase letters or digits to print
	//0:'A'-'Z'
	//1:'a' - 'z'
	//2: 0-9

	srand((unsigned)time(0));

	cout << "Please, enter the following code in the provided text box to continue:\n";
	for (int i = 0; i < 10; i++)
	{
		what_to_print = rand() % 3; //0-2
		switch (what_to_print) //decide what to print
		{
		case 0: cout << char('A' + rand() % ('Z' - 'A' + 1)); //what_to_print is 0; print 'A'-'Z'
			break;
		case 1: cout << char('a' + rand() % ('z' - 'a' + 1)); //what_to_print is 1; print 'a' - 'z'
			break;
		case 2: cout << rand() % 9; //what_to_print is 2; print 0-9
		}
	}

	cout << "\nPress any key to continue.";
	_getch();
	return 0;
}