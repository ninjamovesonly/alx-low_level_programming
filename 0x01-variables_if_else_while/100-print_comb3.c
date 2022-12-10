#include <stdio.h>

/**
 * main - program
 * Description: combination
 * Return: 0
 */

int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 < 9; d1++)
	{
		putchar((d1 % 10) + '0');
		putchar((d2 % 10) + '0');

		if (d1 == 8 && d2 == 9)
		{
			continue;
		}

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
