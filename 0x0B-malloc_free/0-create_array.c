#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: size of the array to be initialized.
 * @c: specific char to intialize the array with.
 *
 * Return: NULL if size == 0 or the function fails
 * otherwise a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size)
	if (a == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		a[x] = c;
	}
	return (a);
}
