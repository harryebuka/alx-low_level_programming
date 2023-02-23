#include "main.h"

/**
* _isalpha - Shows 1 if the input is an alphabet. Another cases, shows 0
*
* @c: The character in ASCII code
*
* Return: 1 for alphabet. 0 for the rest.
*/

int _isalpha(int c)
{
	if ((c >= 65) && (c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
