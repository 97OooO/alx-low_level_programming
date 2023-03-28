#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: Pointer to the string to be printed in reverse
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
