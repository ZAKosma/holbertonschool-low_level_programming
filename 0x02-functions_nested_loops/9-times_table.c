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
	int outNum;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			outNum = x * y;
			if (outNum > 9)
			{
				_putchar(((outNum /10) % 10) + '0');
			}
			else if (y > 0)
			{
				_putchar(' ');
			}
			_putchar((outNum % 10) + '0');
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
