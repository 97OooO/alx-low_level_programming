#include "main.h"
/**
 * rot13 - Encodes a string using ROT13 encryption.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *p = s;

	int i;

	while (*p)
	{
		for (i = 0; i < 13; i++)
		{
			if ((*p >= 'a' && *p < 'n') || (*p >= 'A' && *p < 'N'))
			{
				*p += 13;
			}
			else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
			{
				*p -= 13;
			}

			p++;
		}
	}

	return (s);
}
