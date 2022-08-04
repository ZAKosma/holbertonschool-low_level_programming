#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* main -prints _putchar using the defined _putchar from main.h
*
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(i + 97);
	}
	return (0);
}
