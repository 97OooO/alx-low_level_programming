#include "main.h"

/**
 * factorial - Computes the factorial of a given number.
 * @n: The number to compute the factorial of.
 *
 * Return: The factorial of the number `n`, or -1 if `n` is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}