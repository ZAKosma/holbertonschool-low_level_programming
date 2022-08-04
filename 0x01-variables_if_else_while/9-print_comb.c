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

	for (i = 0; i < 100; i++)
	{
		if (i > 10)
		{
			putchar(((i / 10) % 10) + '0');
		}
		putchar((i % 10) + '0');
		putchar(44);
	}
	putchar(10);
	return (0);
}
