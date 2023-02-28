#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: value taken from main
 * Return: (0)
 */
void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (length = length - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
