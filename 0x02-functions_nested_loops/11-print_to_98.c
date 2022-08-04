#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_to_98 -prints _putchar using the defined _putchar from main.h
*
* @n: this is the first number
*
* Return: 0
*/
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		_putchar('9');
		_putchar('8');
	}
	else
	{
		for (i = n; i < 99; i++)
		{
			if (i < 0)
			{
				_putchar('-');
			}
			if (abs(i) > 10)
			{
				_putchar(((abs(i) / 10) % 10) + '0');
			}
			_putchar((abs(i) % 10) + '0');

			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar(10);
}
