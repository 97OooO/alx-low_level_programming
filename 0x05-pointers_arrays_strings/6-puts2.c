#include "main.h"
/**
 * puts2 - Prints every other character of a string,
 * starting with the first character
 *
 * @str: Pointer to the string to be printed
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int m = 0;
	char *n = str;
	int i;

	while (*n != '\0')
	{
		n++;
		len++;
	}
	m = len - 1;

	for (i = 0 ; i <= t ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
