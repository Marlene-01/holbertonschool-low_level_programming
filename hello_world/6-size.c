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
	long int longintType;
	char charType;
	long long int longlongintType;

	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longlongintType));

	return (0);
}
