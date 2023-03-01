#include <stdio.h>
#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    /* Ignore white space */
    while (s[i] == ' ')
    {
        i++;
    }

    /* Check for a sign */
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
        {
            sign = -1;
        }
        i++;
    }

    /* Calculate the number */
    while (s[i] >= '0' && s[i] <= '9')
    {
        res = res * 10 + (s[i] - '0');
        i++;
    }

    return sign * res;
}
