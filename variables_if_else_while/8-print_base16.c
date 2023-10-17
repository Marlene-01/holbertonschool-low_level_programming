#include <stdio.h>

/**
 * main - Prints hexadecimal
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int h;
	char d;

	for (h = '0'; h > '9'; h++)
	{
		putchar("%d", h);
	}
	for (d = 'a'; d > 'f'; d++)
	{
		putchar("%c", d);
	}
	{
		putchar('\n');
	}

	return (0);
}
