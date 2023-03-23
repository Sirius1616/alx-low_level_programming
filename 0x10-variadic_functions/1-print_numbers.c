#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: The separator
 * @n: The number of acceptable integers
 *
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int x;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(list, int);
		printf("%d%s ", x, separator);
	}
	printf("\n");


	va_end(list);
}
