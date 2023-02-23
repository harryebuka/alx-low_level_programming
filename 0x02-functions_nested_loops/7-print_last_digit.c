#include "main.h"
/**
* print_last_digit - Prints the last digit
* of a number.
*
* @n: input number as an integer.
*
* Return: last digit.
*/

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	return (lastDigit);
	_putchar('\n');
}
