#include <stdio.h>
/**
 * main -mainfunction
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
	putchar('\n');
	return (0);
}
