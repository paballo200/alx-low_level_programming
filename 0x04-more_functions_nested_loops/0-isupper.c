#include "main.h"

/**
 * _isupper - print uppercase
 *
 * @c: printed parameter
 *
 * Return: 1 if its a uppercase
 * and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
