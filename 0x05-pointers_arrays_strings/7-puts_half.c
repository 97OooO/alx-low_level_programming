#include "main.h"
/**
 * puts_half - Function prints half of a string
 * if odd len, n = (length_of_the_string -1 ) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int len = 0, i, start;

	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2 + 1;
	}

	for (i = start; i < len; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
