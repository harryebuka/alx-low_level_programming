#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int newAlphas, alphas;

	for (newAlphas = 0; newAlphas < 10; newAlphas++)
	{
		for (alphas = 97; alphas < 123; alphas++)
		{
			_putchar(alphas);
		}
		_putchar('\n');
	}
}
