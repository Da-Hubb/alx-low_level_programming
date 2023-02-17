#include <stdio.h>
/**
 * main - is always the entry point of the function in this code
 *
 * Return: always returns zero when it is a success
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
		{
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
