#include <stdio.h>
/**
 * main - variables
 *
 * Return: 0 (success)
 */
int main(void)
{
	char p;

	for (p = 'z' ; p >= 'a' ; p--)
		putchar(p);
	putchar('\n');
	return (0);
}
