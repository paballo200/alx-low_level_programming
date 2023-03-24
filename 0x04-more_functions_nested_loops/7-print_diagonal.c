#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of time the diagonal line should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int p;
		int m;

		for (p = 0 ; p <= n ; p++)
		{
			for (m = 0 ; m <= n ; m++)
			{
				if (m == p)
					_putchar('\\');
				else if (m < p)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
