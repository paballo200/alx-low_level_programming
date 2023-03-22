#include "main.h"
/**
 * main - print alphabet
 *
 * Return: 0 (success)
 */
void print_alphabet(void)(void)
{
	char p;

	for (p = 'a' ; p <= 'z'  ; p++)
		_putchar(p);
	_putchar('\n');
	return (0);
}
