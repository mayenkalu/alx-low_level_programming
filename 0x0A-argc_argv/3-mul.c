#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints multiplication of 2 numbers.
 * @argv: array of arguments.
 * @argc: number of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
