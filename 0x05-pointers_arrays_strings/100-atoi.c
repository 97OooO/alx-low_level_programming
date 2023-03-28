#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int sign = 1, num = 0, i = 0;

    // In this stage: Skip whitespace characters
	while (*(s + i) == ' ' || *(s + i) == '\n' || *(s + i) == '\t')
		i++;

    // In this stage: Handle negative sign if present
	if (*(s + i) == '-')
	{
		sign = -1;i++;
	}
    // In this stage: Handle positive sign if present
	else if (*(s + i) == '+')
	{
		i++;
	}

    // In this stage: convert string to integer
	while (*(s + i) >= '0' && *(s + i) <= '9')
	{
		num = num * 10 + (*(s + i) - '0');
		i++;
	}

	return (sign * num);
}
