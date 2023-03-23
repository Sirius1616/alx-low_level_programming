#include "variadic_functions.h"

/**
 * sum_them_all - a function that sums list of numbers
 * @n: the numbers of items to be entered
 * Return: x always
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int x;

	va_start(list, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
		x += va_arg(list, int);


	va_end(list);
	return (x);
}
