#include "main.h"

/**
 * _puts - print of a string.
 * @str: string to be printed.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != 0; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
