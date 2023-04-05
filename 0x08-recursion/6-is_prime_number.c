#include "main.h"
/**
 * check_divisor - checks if a number is divisible by a divisor
 * @n: the number to check
 * @divisor: the divisor to check
 *
 * Return: 1 if n is divisible by divisor, 0 otherwise
 */
int check_divisor(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);

	return (check_divisor(n, divisor + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_divisor(n, 2));
}
