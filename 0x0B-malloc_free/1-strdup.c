#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - duplicate to new memory space location
* @str: char
* Return: 0
*/


char *_strdup(char *str)
{
	char *str0;
	int i = 0;
	int j;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	str0 = malloc(sizeof(char) * (i + 1));

	if (str0 == NULL)
		return (NULL);

	for (j = 0; str0[j]; j++)
		str0[j] = str[i];
	return (str0);
}

