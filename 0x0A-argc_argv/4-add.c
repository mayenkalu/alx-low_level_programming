#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers followed by a new line.
 * @argv: arrays of arguments.
 * @argc: number of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int n, b, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (b = 0; argv[n][b] != '\0'; b++)
		{
			if (!isdigit(argv[n][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}
