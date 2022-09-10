#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabet in lowercase,
 * except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char ch
	while (ch = 'a'; ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		ch++;
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
