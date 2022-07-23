#include <iostream> //required for cin and cout
#include <conio.h> //this is required for _getch()
#include <iomanip> //for formatting output
using namespace std;
int main()
{
	int input_days, //number of days rented
		months, weeks, days; //number of months, weeks & days rented
	double tax_rate, //tax rate; e.g.: 9.5%
		tax_amount, //sales tax added to total
		total, //total amount
		amount_due, //amount due from customer
		monthly, weekly, daily; //rates

	cout << "Enter number of days for rental: ";
	cin >> input_days;

	cout << "Enter the monthly rate: ";
	cin >> monthly;
	cout << "Enter the weekly rate: ";
	cin >> weekly;
	cout << "Enter the daily rate: ";
	cin >> daily;

	cout << "Enter the sales tax rate: ";
	cin >> tax_rate;

	months = input_days / 30;
	weeks = input_days % 30 / 7;//remaining days after months / 7
	days = input_days % 30 % 7;
	//days is given by remainder of days remaining from taking out 
	//months by 7

	total = months * monthly + weeks * weekly + days * daily;
	tax_amount = total * tax_rate / 100.0;
	amount_due = total + tax_amount;
	//or do: amount_due = total + total * tax_rate / 100;
	
	cout << "\nTotal amount due: " << fixed << setprecision(2) << showpoint
		<< '$' << amount_due;

	cout << "\nPress any key to continue.";
	_getch(); //pauses the program
	return 0;
}