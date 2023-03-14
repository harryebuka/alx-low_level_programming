#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: String to split.
 *
 * Return: Pointer to an array of strings (words) or NULL if str == NULL
 * or str == "" or if the function fails.
 */
char **strtow(char *str)
{
    char **words = NULL;
    int i, j, k, len, word_count = 0;

    if (str == NULL || *str == '\0')
        return (NULL);

    len = strlen(str);
    words = malloc(sizeof(char *) * (len + 1));
    if (words == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            word_count++;
            for (j = i; str[j] != ' ' && j < len; j++)
                ;
            words[word_count - 1] = malloc(sizeof(char) * (j - i + 1));
            if (words[word_count - 1] == NULL)
            {
                for (k = 0; k < word_count - 1; k++)
                    free(words[k]);
                free(words);
                return (NULL);
            }
            strncpy(words[word_count - 1], str + i, j - i);
            words[word_count - 1][j - i] = '\0';
            i = j;
        }
    }
    words[word_count] = NULL;
    return (words);
}
