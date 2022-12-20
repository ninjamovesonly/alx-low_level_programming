#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_rev - main method
* @s: array of chars (string)
* Return: void
*/

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
