#include "main.h"
#include <stddef.h>

/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 **/

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
