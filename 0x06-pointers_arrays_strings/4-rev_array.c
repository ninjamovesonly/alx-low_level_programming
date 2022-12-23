#include "main.h"

/**
 * reverse_array - main program
 * @a: array of int
 * @n: int
 * Return: void
 */

void reverse_array(int *a, int n)
{
    int tmp, index;

    for (tmp = 0; (tmp < (n - 1) / 2); tmp++)
    {
        index = a[tmp];
        a[tmp] = a[n - 1 - tmp];
        a[n - 1 - tmp] = index;
    }
}
