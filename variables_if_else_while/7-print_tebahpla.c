#include <stdio.h>

/**
 * main - Prints smile in the mirror
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int l;

	for (l = 'z'; l < 'a'; l++)
	{
		putchar('A' + l);
	}
	{
		putchar('\n');
	}

	return (0);
}

