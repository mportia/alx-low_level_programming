#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: The destination string
 * @src: the source string
 * Return: a pointer to the ruslting string dest
 */

char *_strcat(char *dest, char *src)
{
	int m 0, i;

	while (dest[m])
	{
		m++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[m] = src[i];
		m++;
	}
	dest[m] = '\0';

	return (dest);
}
