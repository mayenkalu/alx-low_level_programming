#include <stdio.h>

/**
 * main - prints the various strings with printf function
 * Return: Always 0 (success)
 */

int main() {
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %d byte(s)\n", (sizeof(char));
	printf("\nSize of an int: %d byte(s)\n", (sizeof(int));
	printf("\nSize of a long int: %d bytes(s)\n", (sizeof(long int));
	printf("\nSize of a long long int: %d bytes(s)\n", (sizeof(long long int));
	printf("\nSize of a float: %d bytes(s)\n", (sizeof(float));
	return 0;
}
