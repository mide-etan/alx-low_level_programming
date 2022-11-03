#include "main.h"

/**
 * print_numbers - function prints numbers from 0 to 9
 *
 *@c: variable that prints numbers
 *
 *Return: Return 0
 */

void print_numbers(void c)
{
	int c;

	for (c < 10)
	{
		putchar(c++ + '0');
	}
	return (0);
}
