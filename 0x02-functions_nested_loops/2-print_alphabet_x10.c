#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_alphabet -prints _putchar using the defined _putchar from main.h
*
* Return: 0
*/
void print_alphabet_10x(void)
{
	int i;
	int count;

	for (count = 0; i < 10; count++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar (i + 97);
		}
		_putchar (10);
	}
}
