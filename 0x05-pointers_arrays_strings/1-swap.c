#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers
 * @a: the first integer to be swapped
 * @b: the second integer to be swappped
 *
 */


void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
