#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints the content of size bytes of the buffer pointed by b
 * @b: pointer to buffer
 * @size: number of bytes to print
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = 0; j < 10; j++)
        {
            if (j + i >= size)
                printf("  ");
            else
                printf("%02x", *(b + i + j));

            if (j % 2 != 0)
                printf(" ");
        }

        for (j = 0; j < 10; j++)
        {
            if (j + i >= size)
                break;

            if (isprint(*(b + i + j)))
                printf("%c", *(b + i + j));
            else
                printf(".");
        }

        printf("\n");
    }
}
