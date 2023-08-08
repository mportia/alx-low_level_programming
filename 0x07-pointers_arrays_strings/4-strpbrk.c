#include "main.h"

/**
 * strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}
	return ('\0');
}
