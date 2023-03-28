#include "main.h"

/**
 * _puts - prints a string and a newline
 * @str: string
 *
 * Return: 0 (success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
