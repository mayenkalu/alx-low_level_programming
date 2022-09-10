#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * using putchar function
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(toupper(ch));
	}	
		putchar('\n');
		return (0);
}
