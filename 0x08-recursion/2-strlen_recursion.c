#include "main.h"

/**
 * _strlen_recursion - main program
 * @s: char * / string
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
