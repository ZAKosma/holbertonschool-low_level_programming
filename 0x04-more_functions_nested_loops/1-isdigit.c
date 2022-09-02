#include "main.h"

/**
 * _isupper - returns the upperase character
 * @c: - is the number
 * Return: uppercase character
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (-1);
}
