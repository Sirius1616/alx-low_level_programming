#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: The separator
 * @n: The number of acceptable integers
 *
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *x;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(list, char *);
		if (separator == NULL)
			printf("%s", x);
		else
		{
			printf("%s", x);
			if (i == (n - 1))
				break;
			printf("%s", separator);
		}

	}
	printf("\n");


	va_end(list);
}
