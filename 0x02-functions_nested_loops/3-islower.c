#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _islower -prints _putchar using the defined _putchar from main.h
*
* Return: 0
*/
int _islower(int c)
{
	//Is lowercase
	if (c > 96 && c < 123)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
