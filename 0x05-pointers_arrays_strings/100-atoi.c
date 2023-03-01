#include <stdio.h>
#include "main.h"
/**
 *_atoi - update value.
 *@s: value to be evaluate.
 *
 *Return: integer
 */
int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    int digit;

    while (isspace(*s)) {
        s++; // Skip whitespace
    }

    if (*s == '+' || *s == '-') {
        if (*s == '-') {
            sign = -1;
        }
        s++; // Skip sign character
    }

    while (isdigit(*s)) {
        digit = *s - '0';
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
            // Integer overflow
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        result = result * 10 + digit;
        s++;
    }

    return sign * result;
}
