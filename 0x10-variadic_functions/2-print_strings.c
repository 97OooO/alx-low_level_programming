#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function prints a string followed by new line
 * @separator: string to be printed between strings
 * @n: number of string passed to the function
 * @...: a variable number of strings to be printed
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	str = va_arg(args, const char *);
	if (str != NULL)
	{
		printf("%s", str);
		for (i = 1; i < n; i++)
		{
			str = va_arg(args, const char *);

			if (separator != NULL)
				printf("%s", separator);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
	}
	else
	{
		printf("(nil)");

		for (i = 1; i < n; i++)
		{
			str = va_arg(args, const char *);
			if (separator != NULL)
				printf("%s", separator);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}

	}

	printf("\n");

	va_end(args);
}
