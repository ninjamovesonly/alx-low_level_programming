#include "main.h"

/**
 * helper_method - helper method
 * @i: integer
 * @n: integer
 * Return: integer
 */

int helper_method(int i, int n)
{
	if (n != i && n % i == 0)
		return (0);
	if (i < n && n % i != 0)
		return (helper_method(i + 1, n));
	return (1);
}

/**
 * is_prime_number - prime number checker
 * @n: integer
 * Return: integer as boolean
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (helper_method(i, n));
}
