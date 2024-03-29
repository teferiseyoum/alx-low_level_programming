#include "main.h"

/**
 * factorial - get the factorial; of a given number
 *
 * @n: factorial to factorialize
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
