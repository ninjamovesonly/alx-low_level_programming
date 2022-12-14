#include "main.h"

/**
 * _isalpha -> Checks if a character is alphabetic
 * @c: The character to be checked
 * Return: correct condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
