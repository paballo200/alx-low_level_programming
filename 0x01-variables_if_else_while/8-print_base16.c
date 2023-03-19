#include <stdio.h>
/**
 * main - variables
 *
 * Return: 0 (success)
 */
int main(void)
{
	int p;
	char m;

	for (p = 0 ; p < 10 ; p++)
		putchar(p + '0');
	for (m = 'a' ; m < 'g' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
