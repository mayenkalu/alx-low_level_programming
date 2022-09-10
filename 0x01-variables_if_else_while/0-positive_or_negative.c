#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the string using the printf function
 * Return: Always 0 (success)
 */
int main(void) /*code generates random numbers*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	return (0);
}
