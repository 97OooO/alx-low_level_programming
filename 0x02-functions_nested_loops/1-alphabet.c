nclude "main.h"

/**
 *print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char letter;
	letter = 'a';

	while (letter <= 'z')
	{
		_putchr(letter);
		_putchar('\n');
		letter++;
	}
}
