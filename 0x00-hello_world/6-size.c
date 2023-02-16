#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0 on success
 */
int main(void)
{
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	printf("Size of a double: %ld byte(s)\n", sizeof(double));
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	return (0);
}
