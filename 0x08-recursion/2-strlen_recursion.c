#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string, recursively.
 * @s: The string to measure the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
