#include <stdio.h>

void first(void) __attribute__ ((constructor));
/**
 * first - prints a sentence before the main
 * function is excuted
 */
void first(void)
{
	printf("you are beat! and yet, you must allow,\n");
	printf("I bore my house up on my back!\n");
}
