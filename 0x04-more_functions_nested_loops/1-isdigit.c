#include "main.h"

/**
 * _isdigit - check 0-9
 * @c: char to check
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
