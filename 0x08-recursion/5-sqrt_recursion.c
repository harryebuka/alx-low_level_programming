#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_recursive(n, 1));
}

/**
 * _sqrt_recursive - recursively find the natural square root of a number
 * @n: number to find the square root of
 * @i: current guess for the square root
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursive(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_recursive(n, i + 1));
}
