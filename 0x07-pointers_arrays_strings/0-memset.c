#include "main.h"

/**
 * _memset - main program
 * @s: array
 * @b: char
 * @n: number of times
 * Return: char *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
