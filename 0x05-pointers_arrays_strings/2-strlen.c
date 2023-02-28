#include <stdio.h>
#include "main.h"
/**
*_strlen - returns the length of a string
*@s: string value to be evaluated
*Return: length of string
*/
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
