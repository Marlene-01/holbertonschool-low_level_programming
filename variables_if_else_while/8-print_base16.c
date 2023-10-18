#include <stdio.h>
#include <string.h>

/**
 * main - Prints Hexadecimal
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int h;
	char d;

	for (h = 0; h <= 9; h++)
	{
		putchar('0' + h);
	}
	for (d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
	}
	{
		putchar('\n');
	}

	return (0);
}
