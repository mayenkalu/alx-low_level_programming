#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to the new string (Success), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, q;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			q++;
		q++;
	}
	q++;
	s = malloc(sizeof(char) * q);

	if (s == NULL)
		return (NULL);

	c = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			s[c] = av[a][b];
			c++;
		}
		s[c] = '\n';
		c++;
	}

	s[c] = '\0';
	return (s);
}
