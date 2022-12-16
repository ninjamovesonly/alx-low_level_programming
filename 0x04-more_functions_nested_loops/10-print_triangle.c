#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print triangle
 * @size: integer param
 * Return: void
 */

void print_triangle(int size)
{
	int i1, i2;

	if (size > 0)
	{
		for (i1 = 1; i1 <= size; i1++)
		{
			for ((i2 = size - i1); i2 > 0; i2--)
				putchar(' ');

			for (i2 = 0; i2 < i1; i2++)
				putchar('#');

			if (i1 == size)
				continue;

			putchar('\n');
		}
	}
	putchar('\n');
}
