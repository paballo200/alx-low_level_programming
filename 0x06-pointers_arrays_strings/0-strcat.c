#include "main.h"

/**
 * char *_strcat - function that concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	int p;
	int k;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[p] = src[k];
		p++;
		k++;
	}
	dest[p] = '\0';
	return (dest);
}
