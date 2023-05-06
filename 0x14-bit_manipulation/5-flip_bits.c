#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_count = 0;
	unsigned long int flip_bits = n ^ m;

	while (flip_bits > 0)
	{
		flip_count += flip_bits & 1;
		flip_bits >>= 1;
	}

	return (flip_count);
}
