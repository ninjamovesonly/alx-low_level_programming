#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print 0-9 except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
			continue;

		putchar(n + '0');
	}
	putchar(10);
}
