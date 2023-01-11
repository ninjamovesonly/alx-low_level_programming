#include "main.h"
#include <stdlib.h>

/**
 * create_array - main function
 * @size: positive integer
 * @c: char
 * Return: char * - string
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
