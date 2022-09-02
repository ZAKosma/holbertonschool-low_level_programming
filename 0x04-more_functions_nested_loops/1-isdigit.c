#include "main.h"

/**
 * _isdigit - returns the upperase character
 * @c: - is the number
 * Return: uppercase character
 */

int _isdigit(int c)
{
	if (c > 0 && c < 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (-1);
}
