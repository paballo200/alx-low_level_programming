#include <stdio.h>
/**
 * main - hello world
 *
 * Return: 0 (success)
 */
int main(void)
{
	char p;

	for (p = 'a' ; p <= 'z' ; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
