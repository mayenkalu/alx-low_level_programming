#include <stdio.h>
/**
 * main - prints all possible combination
 * of single digits numbers, seperated by ,
 * and space
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	{
		for (n = 48; n < 58; n++)
			putchar(n);
		if (n == 57)
		continue;
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
