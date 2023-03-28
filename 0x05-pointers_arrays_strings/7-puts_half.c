#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: 0 (success)
 */
void puts_half(char *str)
{
	int a, b, longer;

	longer = 0;

	for (a = 0 ; str[a] != '\0'; a++)
		longer++;
	b = (longer / 2);

	if ((longer % 2) == 1)
		b = ((longer + 1) / 2);
	for (a = b ; str[a] != '\0' ; a++)
		_putchar(str[a]);
	_putchar('\n');
}
