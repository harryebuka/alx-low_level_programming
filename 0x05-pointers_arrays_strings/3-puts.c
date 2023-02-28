#include "main.h"
#include <stdio.h>
/**
 *_puts - prints a string, to stdout
 *@str: string value to be evaluated
 *Return: nothing.
 */
void _puts(char *str)
{
	int length;

	length = 0;

	while (*(str + 1) != '\0')
	{
		_putchar(str[1]);
		length++;
	}
	_putchar('\n');
}
