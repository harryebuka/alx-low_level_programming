#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always returns 0
 */

int main(void)
{
	char character;
	int integer;
	long longInt;
	long long longLong;
	float afloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longInt));
	printf("Size of a long long: %lu byte(s)\n", sizeof(longLong));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));

	return (0);
}	
