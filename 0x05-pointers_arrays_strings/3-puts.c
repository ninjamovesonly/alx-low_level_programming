#include <stdio.h>
#include "main.h"

/**
 * _puts - main method
 * @str: array of chars (string)
 * Description: prints a string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
