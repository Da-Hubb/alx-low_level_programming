#include <stdio.h>
/**
 * main - entry
 *
 * Return: succes as 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
