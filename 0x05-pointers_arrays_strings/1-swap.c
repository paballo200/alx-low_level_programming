#include "main.h"

/**
 *  swap_int - swaps two value of integer
 *  @a: integer to swap
 *  @b: inter to swap
 *
 *  Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
