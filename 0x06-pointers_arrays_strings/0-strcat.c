#include "main.h"

/**
 * _strcat - main program
 * @str: pointer to a char
 * @source: pointer to a char
 * Return: char *
 */

char *_strcat(char *str, char *source)
{
	char *c = str;

	while (*str != '\0')
	{
		str++;
	}
	while (*source != '\0')
	{
		*str = *source;
		str++;
		source++;
	}
	*str = '\0';
	return (c);
}
