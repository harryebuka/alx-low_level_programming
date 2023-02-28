#include "main.h"
/**
 *rev_string - update value.
 *@s: string value to be evaluated
 *Return: nothing
 */
void rev_string(char *s)
{
	int lenght = 0;
	int updatedLength = 0;
	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	updatedLenght = lenght - 1;
	for ( ; e < ((updatedLength / 2) + 1) ; e++)
	{
		x = (updatedLength - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}
