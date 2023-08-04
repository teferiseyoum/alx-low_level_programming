#include "main.h"

/**
 * _memcpy - function copies @n bytes from memeory area @src
 * to memeory area @dest
 *
 * @n: function copies
 *
 * @src: bytes from memeory area
 *
 * @dest: to memeory area
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
