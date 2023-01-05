#include "main.h"

/**
 * helper_method - helper method
 * @i: integer
 * @n: integer
 * Return: integer
 */

int helper_method(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = helper_method(i + 1, n);
		return (j + 1);
	}
	return (0);
}

/**
 * _sqrt_recursion - square root recursive function
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (helper_method(i, n) == n && n != 1)
		return (-1);
	return (helper_method(i, n));
}
