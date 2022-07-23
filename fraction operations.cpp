/*Write a program that reads two integers as in 3/4 and 1/2 and
displays the sum, difference, product and quotient of first with
or over the second.
Example:
Enter two fractions: 1/2 1/4
Sum = 6/8
Difference = 2/8
Product = 1/8
Quotient = 4/2
Press any key to continue.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int num1, den1, num2, den2, sum_num, sum_den, dif_num, dif_den,
		prod_num, prod_den, div_num, div_den;
	char slash;

	cout << "Enter two fractions: ";
	cin >> num1 >> slash >> den1 >> num2 >> slash >> den2;

	sum_num = num1 * den2 + den1 * num2;
	sum_den = den1 * den2;
	cout << "\nSum = " << sum_num << '/' << sum_den;

	dif_num = num1 * den2 - den1 * num2;
	dif_den = den1 * den2;
	cout << "\nDiff = " << dif_num << '/' << dif_den;

	prod_num = num1 * num2;
	prod_den = den1 * den2;
	cout << "\nProd = " << prod_num << '/' << prod_den;

	div_num = num1 * den2;
	div_den = den1 * num2;
	cout << "\nQuotient = " << div_num << '/' << div_den << endl;

	system("pause");
	return 0;
}