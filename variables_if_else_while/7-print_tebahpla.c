#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	char l;

	for (l = 'z'; l < 'a'; l--)
	{
		putchar('a' + l);
	}
	{
		putchar('\n');
	}

	return (0);
}

