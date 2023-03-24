#include "main.h"

/**
 * print_numbers - function that print numbers
 *
 * Return: 0 (success)
 */
void print_numbers(void)
{
	char p;

	for (p = '0' ; p <= '9' ; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}
