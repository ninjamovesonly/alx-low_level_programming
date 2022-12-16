#include <stdio.h>
#include "main.h"

/**
 * print_square - print square
 * @size: integer param
 * Return: void
 */

void print_square(int size)
{
	int i1, i2;

	if (size > 0)
	{
		for (i1 = 0; i1 < size; i1++)
		{
			for (i2 = 0; i2 < (size - 1); i2++)
				putchar('#');

			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
