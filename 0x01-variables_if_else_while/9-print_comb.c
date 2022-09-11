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
		for (n = 0; n < 10; n++)
		{
			putchar(n + 0);
			if (n < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		return (0);
	}
}
