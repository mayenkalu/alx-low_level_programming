#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * using putchar function
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	putchar("alphabet from a to z are, :\n");
	for (; ch = 'a'; ch <= 'z';)
	putchar('%c\n', ch++);
	return (0);
}
