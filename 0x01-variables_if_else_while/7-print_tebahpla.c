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

	for (i = 26; i > 0; i--)
	{
		putchar(i + 97);
	}
	putchar(10);
	return (0);
}
