#include "main.h"

/**
 * puts2 - main method
 * @str: array of chars (string)
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
