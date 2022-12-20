#include "main.h"

/**
 * _strlen - main program
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

    for (i = 0; s[i] != '\0'; ++i);

	return (i);
}
