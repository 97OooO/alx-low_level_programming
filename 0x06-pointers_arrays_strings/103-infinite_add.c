#include "main.h"
/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}


/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i, j;

	for (i = 0, j = 0; n1[i] != '\0' || n2[j] != '\0'; i++, j++)
	{
		int d1 = (n1[i] != '\0') ? n1[i] - '0' : 0;
		int d2 = (n2[j] != '\0') ? n2[j] - '0' : 0;
		int sum = d1 + d2 + carry;
		carry = (sum >= 10) ? 1 : 0;

		if (i + j < size_r - 1)
		{
			r[i + j] = sum % 10 + '0';
		}
		else
		{
			return (0);
		}
	}

	if (carry)
	{
		if (i + j < size_r - 1)
		{
			r[i + j] = carry + '0';
			r[i + j + 1] = '\0';
		}
		else
		{
			return (0);
		}
	}
	else
	{
		r[i + j] = '\0';
	}

	return (r);
}
