#include "main.h"

/**
 * _isupper - checks if a characrer is uppercase.
 * @c: the integer to be checked
 * Description: this is the program's description.
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
