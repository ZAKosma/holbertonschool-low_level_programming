#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* times_table -prints _putchar using the defined _putchar from main.h
*
*
* Return: 0
*/
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			_putchar((x * y) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar(10);
	}
}
