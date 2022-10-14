#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: prints the size of various types on the computer it is compiled
 * and run on
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\n", (int) sizeof(a));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(b));
	printf("size of a long int: %d byte(s)\n", (int) sizeof(c));
	printf("size of a long long int: %d byte(s)\n", (int) sizeof(d));
	printf("size of a float: %d byte(s)\n", (int) sizeof(e));

	return (0);
}
