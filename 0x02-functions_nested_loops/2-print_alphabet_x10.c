#include "main.h"

/**
 * print_alphabet_x10 - print 10 time the alphabet, in lowercase and followed by new line.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i =0;

	letter ='a';

	while (i<10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
		i++;
	}
}
