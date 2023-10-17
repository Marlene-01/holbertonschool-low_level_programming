#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
		putchar('0' + z);
	}
	{
		putchar('\n');
	}

	return (0);
}
