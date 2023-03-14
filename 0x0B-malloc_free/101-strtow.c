#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in @str.
 */
static int count_words(char *str)
{
        int i, count = 0;

        for (i = 0; str[i]; i++)
        {
                if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
                        count++;
        }

        return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words) or NULL if str == NULL or str == "".
 * Each element of this array should contain a single word, null-terminated.
 * The last element of the returned array should be NULL.
 */
char **strtow(char *str)
{
        char **words;
        int i, j, k, len, n;

        if (str == NULL || *str == '\0')
                return (NULL);

        n = count_words(str);
        words = malloc((n + 1) * sizeof(char *));
        if (words == NULL)
                return (NULL);

        for (i = 0, j = 0; i < n; i++)
        {
                while (str[j] == ' ')
                        j++;

                len = 0;
                while (str[j + len] != ' ' && str[j + len] != '\0')
                        len++;

                words[i] = malloc((len + 1) * sizeof(char));
                if (words[i] == NULL)
                {
                        while (--i >= 0)
                                free(words[i]);
                        free(words);
                        return (NULL);
                }

                for (k = 0; k < len; k++)
                        words[i][k] = str[j + k];
                words[i][k] = '\0';

                j += len;
        }

        words[i] = NULL;
        return (words);
}
