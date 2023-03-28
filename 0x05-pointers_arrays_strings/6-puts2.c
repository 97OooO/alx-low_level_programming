#include "main.h"
/**
 * puts2 - Prints every other character of a string,
 * starting with the first character
 *
 * @str: Pointer to the string to be printed
 */
void puts2(char *str)
{
	int len = 0, i;

	while (str[i] != '\0')
		len++;

	for (i =(len + 1) / 2; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
