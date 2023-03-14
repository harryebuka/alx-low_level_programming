#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
    char *concat_str;
    int s1_len = 0, s2_len = 0, i = 0, j = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[s1_len])
        s1_len++;
    while (s2[s2_len])
        s2_len++;

    concat_str = malloc(sizeof(char) * (s1_len + s2_len + 1));

    if (concat_str == NULL)
        return (NULL);

    while (i < s1_len)
    {
        concat_str[i] = s1[i];
        i++;
    }
    while (j < s2_len)
    {
        concat_str[i] = s2[j];
        i++;
        j++;
    }

    concat_str[i] = '\0';

    return (concat_str);
}
