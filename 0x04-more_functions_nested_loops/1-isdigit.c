#include "main.h"

/**
 * _isdigit -  checks the code if it's digit
 * @c: character to be checked
 *
 *Return: return 1 if c is digit else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
