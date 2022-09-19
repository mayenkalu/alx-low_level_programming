#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: first integer to be swapped with b.
 * @b: second integer to be swapped with a.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp; /* declare a temporary variable*/
	temp  = *a;
	*a = *b;
	*b = temp;
}
