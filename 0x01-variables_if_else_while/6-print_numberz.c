#include <stdio.h>
/**
 * main - A program that prints a line with puts function
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
