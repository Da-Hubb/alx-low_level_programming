#include <stdio.h>
/**
 * main - is always the entry point of the function in this code
 *
 * Return: always returns zero when it is a success
 */
int main(void)
{
	for (char a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
}
