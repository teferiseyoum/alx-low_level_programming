#include "main.h"

/**
 * print_line -straignt -line
 * @n: No of times
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
