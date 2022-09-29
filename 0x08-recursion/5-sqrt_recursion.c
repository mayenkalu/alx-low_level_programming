#include "main.h"
/**
 * sqrt_find - finds the square root of given number
 * @r: the root of the number
 * @q: number to find square root of
 *
 * Return: -1 if number does not have natural sqrt
 * 	else the square root of the number.
 */

int sqrt_find(int r, int q)
{
	if (r * r == q)
		return (r);
	if (r * r > q)
		return (-1);
	return (sqrt_find(r + 1, q));
}
/**
 * _sqrt_recursion - prints the natural square root of a number.
 * @n: the given number.
 * Return: -1 is number is not a natural number;
 * 	else return value of square root of number
 */
int _sqrt_recursion(int n)
{
	if (n != 0)
		return (sqrt_find(1, n));
	return (0);
}
