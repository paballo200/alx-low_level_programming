#include "main.h"

/**
 * positive_or_negative - print positive or negative
 *
 * @i: printed parameter
 *
 * Return: 0 (success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
