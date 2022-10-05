#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: NULL (failure) otherwise contents of s1
 * followed by contents of s2.
 */

char *str_concat(char *s1, char *s2)
{
	char *y;
	unsigned int a, b, c, t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	y = malloc(sizeof(char) * (a + b + 1));

	if (y == NULL)
	{
		free(y);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		y[c] = s1[c];

	t = b;

	for (b = 0; b <= t; c++, b++)
		y[c] = s2[b];

	return (y);
}
