#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	char *start = s;
	char *end = s;
	char temp;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	end = s - 1;

	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
