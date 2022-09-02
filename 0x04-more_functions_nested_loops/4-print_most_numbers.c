#include "main.h"

/**
 * print_numbers - returns the upperase character
 * Return: uppercase character
 */

void print_numbers()
{
	int i;
	int offset = 48;

	for(i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		_putchar (i + offset);
	}

	_putchar (10);
}
