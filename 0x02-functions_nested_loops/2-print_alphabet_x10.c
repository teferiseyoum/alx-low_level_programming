#include "main.h"

/**
 * print_alphabet_x10 -Make alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char t;
	int i = 0;

	{
		for (i = 0 ; i < 10 ; i++)
		for (t = 'a'; t <= 'z' ; t++)
		_putchar(t);
		_putchar('\n');
	}
}
