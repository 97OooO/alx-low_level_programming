#include "main.h"
/**
 * wildcmp - compares two strings and returns 1 if identical, 0 otherwise
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
    /* if both strings are empty, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

    /* if s2 has a "*" character */
	if (*s2 == '*')
	{
        /* we can skip the "*" character or match it 
	 * with any sequence of characters in s1 */
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}

    /* if characters match, continue to next character */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

    /* characters don't match */
	return (0);
}
