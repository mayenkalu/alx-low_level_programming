#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to int n each time
 * it executes, print it
 * Return: Always 0 (succes)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, n % 10);
	if (n % 10 > 5)
		printf("%d and is greater than 5\n");
	else if (n % 10 == 0)
		printf("%d and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("%d and is less than 6 and not 0\n");
	return (0);
}
