#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function takes two integers
 * @min: parameter as minimal
 * @max: parameter as maximal
 *
 * Return: returns the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
