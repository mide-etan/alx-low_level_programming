#include "main.h"

/**
 * _isupper - cheks if number is uppercase
 * @c: variable to be checked
 * Return: 1 if c is uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
