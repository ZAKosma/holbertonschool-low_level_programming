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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(n + " is positive");
	}
	elseif (n < 0)
	{
		printf(n + " is negative");
	}
	else
	{
		printf("0 is zero");
	}
	return (0);
}
