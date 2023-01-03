#include "main.h"

/**
 * _strpbrk - main program
 * @s: char * - string
 * @accept: char * - string
 * Return: char * - string
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (0);
}
