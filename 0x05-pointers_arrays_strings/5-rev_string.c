#include "main.h"

/**
 * rev_string - method
 * @s: array of chars (string)
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
    int m, h;
	char f, l;

	while (s[i] != '\0')
	    i++;

	(m, h) = ((i - 1), (m / 2));

	while (h >= 0)
	{
		f = s[m - h];
		l = s[h];
		s[h] = f;
		s[m - h] = l;
		h--;
	}
}
