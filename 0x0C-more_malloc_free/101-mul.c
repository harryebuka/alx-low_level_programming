#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
  return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
  int len = 0;

  while (*s)
    {
      len++;
      s++;
    }

  return (len);
}

/**
 * mul - multiplies two positive numbers
 * @num1: the first number
 * @num2: the second number
 * Return: a pointer to the result, or NULL on failure
 */
char *mul(char *num1, char *num2)
{
  int len1 = _strlen(num1);
  int len2 = _strlen(num2);
  int len_res = len1 + len2;
  int i, j, carry, n1, n2, prod;
  char *res = malloc(sizeof(char) * (len_res + 1));

  if (res == NULL)
    return (NULL);

  for (i = 0; i < len_res; i++)
    res[i] = '0';

  for (i = len1 - 1; i >= 0; i--)
    {
      carry = 0;

      n1 = num1[i] - '0';

      for (j = len2 - 1; j >= 0; j--)
	{
	  n2 = num2[j] - '0';

	  prod = n1 * n2 + carry + (res[i + j + 1] - '0');

	  carry = prod / 10;

	  res[i + j + 1] = (prod % 10) + '0';
	}

      res[i + j + 1] = carry + '0';
    }

  while (*res == '0' && *(res + 1) != '\0')
    res++;

  return (res);
}

/**
 * main - entry point for the program
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
  char *num1, *num2, *res;

  if (argc != 3)
    {
      printf("Error\n");
      return (98);
    }

  num1 = argv[1];
  num2 = argv[2];

  while (*num1)
    {
      if (!_isdigit(*num1))
	{
	  printf("Error\n");
	  return (98);
	}
      num1++;
    }

  while (*num2)
    {
      if (!_isdigit(*num2))
	{
	  printf("Error\n");
	  return (98);
	}
      num2++;
    }

  res = mul(argv[1], argv[2]);

  if (res == NULL)
    {
      printf("Error\n");
      return (98);
    }

  printf("%s\n", res);

  free(res);

  return (0);
}
