#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string given as parameter
 * Return: to dup_str value
 */
char *_strdup(char *str)
{
	char *dup_str;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
