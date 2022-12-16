#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print from 0-9
 * Return: void
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar(10);
}
