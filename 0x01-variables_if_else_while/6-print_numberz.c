#include <stdio.h>
/**
 * main - variables
 *
 * Return: 0 (success)
 */
int main(void)
{
	int p;

	for (p = 0 ; p < 10 ; p++)
		putchar(p + '0');
	putchar('\n');
	return (0);
}
