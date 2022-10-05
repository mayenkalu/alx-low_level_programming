#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	unsigned int a, b;
	char *t;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
		;
	a++;


	t = (char *)malloc(sizeof(char) * a);
	
	if (copy == NULL)
	{
		return (NULL);
	}
	for (b = 0; b <= a; b++)
	{
		t[b] = str[b];
	}
	return (t);
}
