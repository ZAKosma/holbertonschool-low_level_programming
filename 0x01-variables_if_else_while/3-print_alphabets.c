#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(i + 97);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(i + 65);
	}
	putchar(10);
	return (0);
}
