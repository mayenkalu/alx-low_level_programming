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
			putchar(',');
			putchar(' ');
		if (n == 57)
		continue;
	}
	putchar('\n');
	return (0);
}
