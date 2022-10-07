#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings with a given number of bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to copy into s1
 *
 * Return: Null if error or char pointer to the new joined place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int a, b, c, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	if (n > b)
		n = b;

	c = a + n;

	arr = malloc(c + 1);

	if (c == NULL)
		return (NULL);

	for (x = 0; x < c; x++)
		if (x < a)
			arr[x] = s1[x];
		else
			arr[x] = s2[x - a];

	arr[x] = '\0';

	return (arr);

}
