/*Write a program that reads an integer and then prints all the Fibonacci numbers up to the integer
entered that are also prime numbers. Fibonacci numbers are:  0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
Example:
Enter the limit:  100
2 3 5 13 89
Press any key to continue.
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int num1 = 0, num2 = 1, sum = num1 + num2, limit;
	bool prime;

	cout << "Enter limit: ";
	cin >> limit;

	while (sum <= limit)
	{
		prime = true;
		for (int i = 2; i <= sum / 2; i++)
		{
			if (sum % i == 0)
			{
				prime = false;
				break;
			}
		}
		if (prime && sum > 1)
			cout << sum << ' ';
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
	}
	cout << "\nPress any key to continue.";
	_getch();
	return 0;
}