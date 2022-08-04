#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_last_digit -prints _putchar using the defined _putchar from main.h
*
* @n: is a number that is passed
*
* Return: 0
*/
int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return ((n % 10));
}
