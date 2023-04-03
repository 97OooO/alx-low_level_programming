#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the
 *           string haystack
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j, k;

    for (i = 0; haystack[i]; i++)
    {
        for (j = i, k = 0; needle[k] && haystack[j] == needle[k]; j++, k++)
            ;
        if (needle[k] == '\0')
            return (haystack + i);
    }

    return (NULL);
}
