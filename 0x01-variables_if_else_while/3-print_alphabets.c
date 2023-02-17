#include <stdio.h>
/**
 * main - this is always the entry point
 *
 * Return: 0 always for success of the fucntion
 */
int main(void)
{
	char x, y;

	x = 'a';
	y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
