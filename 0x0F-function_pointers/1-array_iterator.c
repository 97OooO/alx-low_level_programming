#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 *
 * @array: Array of integers
 * @size: Size of the array
 * @action: Function pointer to execute on each element of the array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
