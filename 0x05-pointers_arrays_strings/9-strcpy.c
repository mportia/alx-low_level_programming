#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0 ; src[m] != '\0' ; m++)
		dest[m] = src[m];
	dest[m] = '\0';
	return (dest);
}
