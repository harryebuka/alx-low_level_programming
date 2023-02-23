#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'prints alphabets in lowercase'
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
	for (int alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	
	_putchar('\n');
}	
