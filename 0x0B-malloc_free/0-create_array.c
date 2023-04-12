#include "main.h"
/**
 * create_array - Creates an array of chars and initialize
 *
 * @size: size of array
 * @c: the character
 * Return: return to 0 
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (0);

	arr = malloc(sizeof(char) * size);

	if (arr == 0)
		return (0);

	for (unsigned int i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
