#include "main.h"
#include <stdio.h>

/**
* _isupper - Shows 1 if the input is an uppercase
* character. Another cases, shows 0
*
* @c: The character in ASCII code
*
* Return: 1 for uppercase. 0 for the rest.
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
