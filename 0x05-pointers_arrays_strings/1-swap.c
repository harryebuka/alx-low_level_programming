#include <stdio.h>
#include "main.h"
/**
*swap_int - swaps the values of two integers.
*@a: value to be evaluated
*@b: value to be evaluated
*Return: nothing
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
