#include "main.h"

/**
 * _islower - Make lower case letters
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for anthing else
 */
int _islower(int c)
{
	if  (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
