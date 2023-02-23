#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: void
*/

void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha < 123; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
