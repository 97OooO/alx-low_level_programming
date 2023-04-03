#include "main.h"

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: the matrix of integers
 * @size: the size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - i - 1);
	}

	printf("%d, %d\n", sum1, sum2);
}
