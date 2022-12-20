#include "main.h"

/**
* _strcpy - main method
* @dest: char pointer
* @src: char pointer
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
