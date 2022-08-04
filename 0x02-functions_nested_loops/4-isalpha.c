#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _isalpha -prints _putchar using the defined _putchar from main.h
*
* @c: is a number that is passed
*
* Return: 0
*/
int _isalpha(int c)
{
	/**
	 *   Is lowercase
	*/
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
