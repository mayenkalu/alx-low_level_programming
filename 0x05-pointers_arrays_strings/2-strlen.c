#include "main.h"
/**
 * _strlen - prints the length of a string.
 * @s: string to check its length.
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

