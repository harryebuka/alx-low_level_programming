#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all it's parameters
 * @n: number of paramenters
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
