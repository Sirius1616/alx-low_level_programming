#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - A program that prints a line with puts function
 * Return: 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %n is %n and is greater than 5/n", n, n);
	}
	else if 
	{
		printf("Last digit of %n is %n and is zero/n", n, n)
	}
	else 
	{
		printf("Last digit of %n is %n and is less than 6 and not 0/n", n, n)
	}
	return (0);
}
