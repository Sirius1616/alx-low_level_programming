#include <stdio.h>

/**
 * siriusa - a function that prints a sentence
 *
 */


void siriusa(void) __attribute__ ((constructor));

void siriusa(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
