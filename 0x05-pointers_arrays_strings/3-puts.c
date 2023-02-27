#include "main.h"

/**
 * _puts - prints a string
 * @str: the string that the length is to be printed
 *
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
