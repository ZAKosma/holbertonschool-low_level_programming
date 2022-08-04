#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main -prints _putchar using the defined _putchar from main.h
*
* Return: 0
*/
int print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar (i + 97);
	}
	_putchar (10);
	return (0);
}
