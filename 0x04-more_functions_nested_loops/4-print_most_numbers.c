#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function prints numbers from 0 to 9
 *@c: character to print number
 *Return: Always 0
 */

void print_most_numbers(void c)
{
	int c = 0;

	while (c < 10)
	{
		if ( c != 2 && c != 4)
		_putchar(c++ + '0');
	}
	_putchar('\n');
}
