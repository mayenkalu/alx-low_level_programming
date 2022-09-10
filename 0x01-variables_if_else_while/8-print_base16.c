#include <stdio.h>
/**
 * main - prints all numbers of base 16
 * follwed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

