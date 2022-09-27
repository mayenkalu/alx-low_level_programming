#include"main.h"
/**
 * _memset - fills a memory with a byte.
 * @s: string whose memory will be filled.
 * @b: character to fill in memory.
 * @n: number of bytes to fill in memory.
 * Return: pointer of memory of s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++;)
	{
		s[i] = b;
	}
	return (s);
}
