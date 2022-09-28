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
	while (n)
	{
		s[n - 1] = b; n--;
	}
	return (s);
}
