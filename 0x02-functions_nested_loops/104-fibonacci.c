#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return: (Success)
 */

int main(void)
{
	int i, fib1 = 1, fib2 = 2, fib_next;

	printf("%d, %d, ", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		fib_next = fib1 + fib2;
		printf("%d", fib_next);

		if (i != 98)
		{
			printf(", ");
		}

		fib1 = fib2;
		fib2 = fib_next;
	}
	printf("\n");
	return (0);
}
