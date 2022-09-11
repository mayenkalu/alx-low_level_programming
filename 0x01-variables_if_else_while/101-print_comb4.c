#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int l, m, n;

	for (l = 48; l <= 58; l++)
	{
		for (m = l + 1; m <= 58; m++)
		{
			for (n = m + 1; n <= 58; n++)
			{
				putchar(l);
				putchar(m);
				putchar(n);
				if (l == 57 && m == 58 && n == 59)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
