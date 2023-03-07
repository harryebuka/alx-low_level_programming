#include "main.h"
/**
 * check_divisibility - checks if a number is divisible by any number up to i
 *
 * @n: the number to check
 * @i: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_divisibility(int n, int i)
{
    	if (i == 1)
        	return (1);

    	if (n % i == 0)
        	return (0);

    	return (check_divisibility(n, i - 1));
}

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    	if (n <= 1)
        	return (0);

	return (check_divisibility(n, n - 1));
}
