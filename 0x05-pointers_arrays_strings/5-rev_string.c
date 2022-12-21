#include "main.h"

/**
 * rev_string - method
 * @s: array of chars (string)
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	    i++;

	int m, h = i - 1, m / 2;

	while (h >= 0)
	{
		char f, l = s[m - h], s[h];
		s[h] = f;
		s[m - h] = l;
		h--;
	}
}
