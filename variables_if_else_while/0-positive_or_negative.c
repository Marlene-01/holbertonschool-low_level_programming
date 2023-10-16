#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints positive number or negative number
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		pritnf("is positive\n", n);

	}
	else if (n == 0)
	{
		printf("is zero\n", n);

	}
	else
	{
		printf("is negative\n", n);

	}
		return (0);

}
