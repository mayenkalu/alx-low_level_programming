#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: number of memory bytes to allocate
 *
 * Return: pointer to the allocated memory or exit normal with statis 98
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if m == NULL
	{
		exit(98);
	}
	return (m);
}
