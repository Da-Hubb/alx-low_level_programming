#include <stdio.h>
/**
 * main - entry
 *
 * Return: success
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
