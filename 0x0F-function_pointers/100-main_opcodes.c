#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of pointers to arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *p = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", *(p + i));
		if (i != bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
