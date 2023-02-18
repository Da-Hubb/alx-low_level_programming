#include <stdio.h>
/**
 * main - always entry
 *
 * Return: success 0
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
