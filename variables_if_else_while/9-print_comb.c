#include <stdio.h>

/**
 * main - Prints possible combinations
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		putchar('0' + p);
	}
	{
		putchar(',');
	}
	{
		putchar(' ');
	}
	{
		putchar('\n');
	}
	return (0);
}
