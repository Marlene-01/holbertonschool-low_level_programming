#include <stdio.h>

/**
 * main - Print "prints the size of various types on the computer."
 *
 * Return: Always 0.
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	printf("Size of double: %zu byte(s)\n", sizeof(doubleType));
	printf("Size of char: %zu byte(s)\n", sizeof(charType));

	return (0);
}
