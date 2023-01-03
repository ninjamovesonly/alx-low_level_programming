#include "main.h"

/**
 * _memcpy - main program
 * @dest: destination
 * @src: source
 * @n: number of times
 * Return: char *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
