#include "main.h"

/**
 * puts2 - prints another character of a string
 * @str: string
 *
 * Return: 0 (success)
 */
void puts2(char *str)
{
	int longer = 0;
	int p = 0;
	char *h = str;
	int j;

	while (*h != '\0')
	{
		h++;
		longer++;
	}
	p = longer - 1;
	for (j = 0 ; j <= p ; j++)
	{
		if (j % 2 == 0)
	{
		_putchar(str[j]);
	}
	}
	_putchar('\n');
}
