#include <stdio.h>
/**
 * main - the entry point of the code
 *
 * Return: always 0 for success
 */
int main(void)
{
	char h;

	h = 'a';
	while (h <= 'z')
	{
		putchar(h);
		putchar("\n");
		h++;
	}
	return (0);
}
