#include"main.h"

/**
 * char *_strncat - function that concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int k;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[p] = src[k];
		p++;
		k++;
	}
	dest[p] = '\0';
	return (dest);
}
