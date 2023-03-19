#include <stdio.h>
/**
 * main - variables
 *
 * Return: 0 (success)
 */
int main(void)
{
	char p;

	for (p = 'a' ; p <= 'z' ; p++)
		if (p != 'e' && p != 'q')
			putchar(p);
	putchar('\n');
	return (0);
}
