#include "main.h"
#include <stdlib.h>

/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, x, y, len;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s2[j] != '\0')
		j++;
	len = i + j;

	ptr = malloc((sizeof(char) * len) + 1);
	if (ptr == NULL)
		return (NULL);
	x = 0;

	while (s1[x] != '\0')
	{
		ptr[x] = s1[x];
		x++;
	}
	y = 0;

	while (s2[y] != '\0')
	{
		ptr[x] = s2[y];
		x++;
		y++;
	}
	ptr[y] = '\0';
	return (ptr);
}
