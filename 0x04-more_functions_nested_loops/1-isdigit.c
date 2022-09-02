#include "main.h"

/**
 * _isdigit - returns the upperase character
 * @c: - is the number
 * Return: uppercase character
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (-1);
}
