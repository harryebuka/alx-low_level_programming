#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: an array of pointers to the arguments
 *
 * Return: a pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
        char *str;
        int i, j, k, len = 0;

        if (ac == 0 || av == NULL)
                return (NULL);

        for (i = 0; i < ac; i++)
                for (j = 0; av[i][j]; j++)
                        len++;

        str = malloc(sizeof(char) * (len + ac + 1));
        if (str == NULL)
                return (NULL);

        k = 0;
        for (i = 0; i < ac; i++)
        {
                for (j = 0; av[i][j]; j++)
                        str[k++] = av[i][j];
                str[k++] = '\n';
        }
        str[k] = '\0';

        return (str);
}
