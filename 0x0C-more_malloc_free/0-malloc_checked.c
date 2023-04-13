#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Function allocates memory using malloc.
 * @b: attempts to allocate b bytes of memory using the malloc
 *
 * Return: return to pointer value allocated.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
