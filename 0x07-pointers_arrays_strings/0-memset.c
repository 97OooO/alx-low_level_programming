#include "main.h"
/**
 * _memset - Fill memory with a constant byte
 * @s: Pointer to the memory area to fill
 * @b: The constant byte to fill the memory area with
 * @n: The number of bytes to fill
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
