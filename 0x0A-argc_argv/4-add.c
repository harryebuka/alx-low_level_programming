#include <stdio.h>
#include <stdlib.h> // For atoi() function

/**
 * main - Entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
    int sum = 0;
    int i;
    bool error = false;

    if (argc < 2) {
        printf("0\n");
        return (0);
    }

    for (i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        int j;

        for (j = 0; argv[i][j] != '\0'; j++) {
            if (argv[i][j] < '0' || argv[i][j] > '9') {
                error = true;
                break;
            }
        }

        if (error) {
            printf("Error\n");
            return (1);
        }

        if (num < 0) {
            continue;
        }

        sum += num;
    }

    printf("%d\n", sum);

    return (0);
}
