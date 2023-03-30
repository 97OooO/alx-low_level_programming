#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int m;

	m = n;

	if (m / 10 != 0)
        {
                print_number(m / 10);
        }

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}

	_putchar((m % 10) + '0');
}
