#include "main.h"
/**
 * print_most_numbers - prints numbers
 *
 * Return: 0 (success)
 */
void print_most_numbers(void)
{
	char p;

	for (p = '0' ; p <= '9' ; p++)
	{
		if (!(p == '2' || p == '4'))
			_putchar(p);
	}
	_putchar('\n');
}
