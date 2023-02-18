#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0 for success
 */
int main(void)
{
	int x;

	char a;

	x = 0;
	a = 'a';
	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
