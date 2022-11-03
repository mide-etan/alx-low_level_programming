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

	while (c < 10)
	{
		_putchar(c++ + '0');
	}
	_putchar('\n');
	return (0);
}
