#include "main.h"
#include <stdio.h>

/**
 * main -  entry
 *
 * Return: return 1 if uppercase else 0
 */

int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
