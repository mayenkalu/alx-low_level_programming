#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argv: array of arguments.
 * @argc: number of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int n;  

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
