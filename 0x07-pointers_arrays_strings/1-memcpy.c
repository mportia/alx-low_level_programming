#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where it is copied
 * @n: number of byte
 * Return: copied memory with n byte chenged
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int i = n;

	for (; m < i; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
