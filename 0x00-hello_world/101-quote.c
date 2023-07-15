#include <stdio.h>
#include <unistd.h>
/**
 * main -A a program that prints exactly
 * Return: Always 1 (if the program terminates succussfuly).
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
