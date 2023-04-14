#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - computes the length of a string
 * @s: the string to compute the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * print_error - prints an error message and exits with status 98
 */
void print_error(void)
{
	char *error_msg = "Error\n";
	int i;

	for (i = 0; i < _strlen(error_msg); i++)
		_putchar(error_msg[i]);

	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of command-line arguments
 * @argv: an array of pointers to the command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int i, j, carry, len1, len2, len_res;
	int *res;

	if (argc != 3)
		print_error();

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);

	for (i = 0; i < len1; i++)
		if (!_isdigit(argv[1][i]))
			print_error();

	for (i = 0; i < len2; i++)
		if (!_isdigit(argv[2][i]))
			print_error();

	len_res = len1 + len2;
	res = calloc(len_res, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			res[i + j + 1] += (argv[1][i] - '0') * (argv[2][j] - '0') + carry;
			carry = res[i + j + 1] / 10;
			res[i + j + 1] %= 10;
		}

		res[i] += carry;
	}

	i = 0;
	while (res[i] == 0 && i < len_res - 1)
		i++;

	for (; i < len_res; i++)
		_putchar(res[i] + '0');

	_putchar('\n');

	free(res);

	return (0);
}
