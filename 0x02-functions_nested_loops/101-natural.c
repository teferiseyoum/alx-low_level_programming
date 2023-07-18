#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 up to 1024
 * Return: Always (success)
 */

int main(void)
{
	int t, z;

	while (t < 1024)
	{
		if ((t % 3 == 0) || (t % 5 == 0))
		{
			z += t;
		}
		t++;
	}
	printf("%d\n", z);
	return (0);
}
