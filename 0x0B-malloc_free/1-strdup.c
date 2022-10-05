#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory.
 * @str: string
 *
 * Return: NULL if string is NULL or insufficient memory
 * otherwise pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *t;
	unsigned int a, b;

	if (t == NULL)
		return (NULL);

	for (a = 0; t[a] != '\0'; a++)
		;

	t = (char *)malloc(sizeof(char) * (a + 1));

	if (t ==  NULL)
		return (NULL);

	for (b = 0; b <= i; b++)
		t[b] = t[b];
	return (t);
}