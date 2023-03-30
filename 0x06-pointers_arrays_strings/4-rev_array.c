#include "main.h"

/**
 * reverse_array - function that reverses array of integer
 * @a: array
 * @n: number of elements of an array
 *
 * Return: 0 (success)
 */
void reverse_array(int *a, int n)
{
	int p;
	int k;

	for (p = 0 ; p < n-- ; p++)
	{
		k = a[p];
		a[p] = a[n];
		a[n] = k;
	}
}
