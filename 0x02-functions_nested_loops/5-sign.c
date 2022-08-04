#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_sign -prints _putchar using the defined _putchar from main.h
*
* @n: is a number that is passed
*
* Return: 0
*/
int print_sign(int n)
{
	/**
	 *   Is lowercase
	*/
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
