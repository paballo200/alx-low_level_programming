#include "main.h"
/**
 * char *string_toupper- changes lowercase to uppercase
 * @p: pointer
 *
 * Return: p
 */
char *string_toupper(char *p)
{
	int k;

	k = 0;
	while (p[k] != '\0')
	{
		if (p[k] >= 'a' && p[k] <= 'z')
			p[k] = p[k] - 32;
		k++;
	}
	return (p);
}

