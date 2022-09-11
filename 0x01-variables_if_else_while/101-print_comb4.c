#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int l, m, n;
	{
		for (l = 48; l <= 56; l++)
		{
			for (m = 49; m <= 57; m++)
			{
				for (n = 50; n <= 58; n++)
				{
					if (n > m > l)
					{
						putchar(l);
						putchar(m);
						putchar(n);
					if (l != 56 || m != 57 || n != 58)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
