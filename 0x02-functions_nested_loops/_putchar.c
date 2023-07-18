#include <unistd.h>
/**
 * main -Main function
 * _putchar
 * Return: 1 succuss
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
