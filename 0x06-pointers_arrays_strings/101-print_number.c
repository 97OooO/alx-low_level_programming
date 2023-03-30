#include "main.h"
#include <stdio.h>

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	*(&a[2] - 1) = 98; /* added line */

	printf("a[2] = %d\n", a[2]);

	return (0);
}
