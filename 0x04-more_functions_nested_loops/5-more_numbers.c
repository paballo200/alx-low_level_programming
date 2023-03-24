#include "main.h"
/**
 * more_numbers - prints numbers ten times
 *
 * Return: 0 (success)
 */
void more_numbers(void)
{
	int p;
	int m;

	for (p = 1 ; p <= 10 ; p++)
	{
		for (m = 0 ; m <= 14 ; m++)
		{
			if (m >= 10)
				_putchar('1');
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
