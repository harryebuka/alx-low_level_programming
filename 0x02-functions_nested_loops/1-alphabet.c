#include "main.h"
/**
 * Description: 'prints alphabets in lowercase'
 *
 * Return: Always 0
*/

void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 123; alpha++)
	{
		_putchar(alpha);
	}
	
	_putchar('\n');
}	
