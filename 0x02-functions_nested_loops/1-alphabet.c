nclude "main.h"

/**
 *print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char c[] = "abcdefghijklmnoprstuvwxyz\n";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchr(c[i]);
		_putchar('\n');
		i++;
	}

	return (0);
}
