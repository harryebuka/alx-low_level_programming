#include "main.h"

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
	if ((c >= 65) && (c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
