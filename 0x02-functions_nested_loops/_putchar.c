#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to start
 * @c: the character to print
 *
 * Return: On Success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
